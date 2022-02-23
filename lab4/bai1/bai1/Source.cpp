#include "Header.h"

LinkedList::LinkedList()
{
	pHead = pTail = nullptr;
	curN = 0;
}

LinkedList::~LinkedList()
{
	if (pHead != nullptr)
	{
		delete pHead;
		delete pTail;
	}
	curN = 0;
}

Node* LinkedList::CreateNode(const int& n)
{
	Node* node = new Node;
	node->info = n;
	node->pNext = nullptr;
	return node;
}

Node* LinkedList::AddHead(const int &n)
{
	Node* cur = CreateNode(n);
	if (pHead == nullptr)
	{
		pHead = pTail = cur;
		curN++;
		return cur;
	}
	cur->pNext = pHead;
	pHead = cur;
	curN++;
	return cur;
}

Node* LinkedList::AddTail(const int& n)
{
	Node* cur = CreateNode(n);
	if(pHead == nullptr)
	{
		pHead = pTail = cur;
		curN++;
		return cur;
	}
	pTail->pNext = cur;
	pTail = cur;
	curN++;
	return cur;
}

Node* LinkedList::RemoveHead()
{
	if (pHead == nullptr)
		return nullptr;
	pHead = pHead->pNext;
	curN--;
	return pHead;
}

Node* LinkedList::RemoveTail()
{
	if (pHead == nullptr || pHead->pNext == nullptr)
		return RemoveHead();
	Node* p = pHead;
	while (p->pNext->pNext != nullptr)
	{
		p = p->pNext;
	}
	p->pNext = nullptr;
	pTail = p;
	curN--;
	return pHead;
}

int& LinkedList::operator[](const int& i)
{
	if (i < 0)
		return pHead->info;
	if (i >= curN)
		return pTail->info;
	Node* p = pHead;
	for (int j = 0; j < curN; j++)
	{
		if (j == i)
			return p->info;
		p = p->pNext;
	}

}


ostream& operator << (ostream& os, const LinkedList& ll)
{
	Node* temp = ll.pHead;
	while (temp != nullptr)
	{
		os << temp->info << ", ";
		temp = temp->pNext;
	}
	return os;
}