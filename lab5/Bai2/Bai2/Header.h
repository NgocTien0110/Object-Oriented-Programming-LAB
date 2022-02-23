#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Node 
{
	string data;
	int n;
	Node* pNext;
};

class LinkedList {
private:
	int num;
	Node* pHead, * pTail;
public:
	LinkedList();
	~LinkedList();

	static Node* CreateNode(const string&);

	Node* AddHead(const string&);
	Node* AddTail(const string&);
	Node* AddAt(const string&);
	Node* Insert(const string&);
	Node* RemoveHead();

	string Output();
};

class Count {
private:
	string fileName;
	LinkedList* data;
public:
	Count();
	Count(string fileName);
	~Count();

	string PrintDoc();

	friend ostream& operator<<(ostream& os, const Count& c);
};

