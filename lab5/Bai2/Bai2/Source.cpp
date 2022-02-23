#include "Header.h"

LinkedList::LinkedList()
{
	this->pHead = nullptr;
	this->pTail = nullptr;
	this->num = 0;
}

LinkedList::~LinkedList() 
{
	Node* temp = this->pHead;

	while (temp != nullptr) {
		RemoveHead();
		temp = this->pHead;
	}

	this->pTail = nullptr;
}

Node* LinkedList::CreateNode(const string& data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->n = 1;
	temp->pNext = nullptr;
	return temp;
}

Node* LinkedList::AddHead(const string& data)
{
	Node* temp = CreateNode(data);

	if (this->pHead == nullptr)
	{
		this->pHead = temp;
		this->pTail = temp;
	}
	else 
	{
		temp->pNext = this->pHead;
		this->pHead = temp;
	}

	this->num++;

	return this->pHead;
}

Node* LinkedList::AddTail(const string& data)
{
	Node* temp = CreateNode(data);

	if (this->pHead == nullptr) {
		this->pHead = temp;
		this->pTail = temp;
	}
	else 
	{
		this->pTail->pNext = temp;
		this->pTail = temp;
	}

	this->num++;
	return this->pHead;
}

Node* LinkedList::AddAt(const string& data)
{
	Node* p = this->pHead;

	while (p->pNext != this->pTail && p->pNext->data < data)
		p = p->pNext;

	if (data == p->pNext->data)
		p->pNext->n++;
	else 
	{
		Node* temp = CreateNode(data);
		temp->pNext = p->pNext;
		p->pNext = temp;
		this->num++;
	}

	return this->pHead;
}

Node* LinkedList::Insert(const string& data) 
{
	if (this->pHead == nullptr)
		AddHead(data);
	else
	{
		if (data == this->pHead->data)
			this->pHead->n++;
		else if (data == this->pTail->data)
			this->pTail->n++;

		else if (data < this->pHead->data)
			AddHead(data);
		else if (data > this->pTail->data)
			AddTail(data);
		else
			AddAt(data);
	}
		
	return this->pHead;
}

Node* LinkedList::RemoveHead() 
{
	if (this->pHead == nullptr)
		this->pTail = nullptr;
	else if (this->pHead != nullptr) 
	{
		Node* temp = this->pHead;
		this->pHead = this->pHead->pNext;
		this->num--;
		delete temp;		
	}

	return this->pHead;
}

string LinkedList::Output()
{
	Node* p = this->pHead;
	string res = "";

	if (p == nullptr)
		res = "Empty.\n";
	else
		while (p != nullptr)
		{
			res += p->data + ": " + to_string(p->n) + " \n";
			p = p->pNext;
		}
	return res;
}




Count::Count() {
	this->data = new LinkedList;
}

Count::~Count() {
	this->data->~LinkedList();
}

Count::Count(string fileName) 
{
	this->fileName = fileName;
	this->data = new LinkedList;

	ifstream ifs(fileName);
	if (!ifs.is_open())
	{
		cout << "Cannot open file. \n" << endl;
	}
	else
	{
		string s = "";
		getline(ifs >> ws, s, '\0');

		string word = "";

		for (int i = 0; i < s.size() ; i++) 
		{
			if ((s[i] > 'z' || s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a')) && word != "")
			{
				this->data->Insert(word);
				word = "";
			}
			else
			{
				if(word >= "a" && word <= "z" || word >= "A" && word <= "Z")
					word += s[i];
				else
					word = s[i];
			}
		}
		ifs.close();
	}
}

string Count::PrintDoc()
{
	ifstream ifs(this->fileName);

	string s = "";
	getline(ifs >> ws, s, '\0');

	ifs.close();

	return s;
}

ostream& operator<<(ostream& os, const Count& c) {
	return os << c.data->Output() << endl;
}