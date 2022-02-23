#include "Header.h"


SoNguyenLon::SoNguyenLon()
{
	num = 0;
	pHead = pTail = nullptr;
}

Node* SoNguyenLon::CreateNode(const int& x)
{
	Node* temp = new Node;
	temp->val = x;
	temp->pNext = temp->pPrev = nullptr;
	return temp;
}

Node* SoNguyenLon::AddHead(const int& x)
{
	Node* pCur = CreateNode(x);
	if (this->pHead == nullptr)
	{
		pHead = pTail = pCur;
		num++;
		return pCur;
	}
	pCur->pNext = pHead;
	pHead->pPrev = pCur;
	pHead = pCur;
	num++;
	return pCur;
}

Node* SoNguyenLon::AddTail(const int& x)
{
	Node* pCur = CreateNode(x);
	if (pHead == nullptr)
	{
		pHead = pTail = pCur;
		num++;
		return pCur;
	}
	pCur->pPrev = pTail;
	pTail->pNext = pCur;
	pTail = pCur;
	num++;
	return pCur;
}

Node* SoNguyenLon::RemoveHead()
{
	if (pHead == nullptr)
		return nullptr;
	pHead = pHead->pNext;
	num--;
	return pHead;
}

SoNguyenLon::SoNguyenLon(int b)
{
	int temp;
	num = 0;
	pHead = pTail = nullptr;
	while (b > 0)
	{
		temp = b % 10;
		AddHead(temp);
		b /= 10;
	}
}

SoNguyenLon::SoNguyenLon(int a, int b)
{
	num = 0;
	pHead = pTail = nullptr;
	for (int i = 0; i < b; i++)
		AddHead(a);
}

SoNguyenLon::~SoNguyenLon()
{
	pHead = pTail = nullptr;
	num = 0;
}

bool SoNguyenLon::check(const SoNguyenLon& a, const SoNguyenLon& b)
{
	if (a.num > b.num)
		return true;
	if (a.num < b.num)
		return false;

	Node* a1 = a.pHead;
	Node* b1 = b.pHead;
	while (a1 != nullptr)
	{
		if (a1->val > b1->val)
			return true;
		a1 = a1->pNext;
		b1 = b1->pNext;
	}

	return false;
}

SoNguyenLon operator+(SoNguyenLon a, SoNguyenLon b)
{
	SoNguyenLon sum;
	int rem = 0;
	while (a.num > b.num)
		b.AddHead(0);
	while (b.num > a.num)	
		a.AddHead(0);
	Node* a1 = a.pTail;
	Node* b1 = b.pTail;
	while(a1 != nullptr)
	{
		int tinh = a1->val + b1->val + rem;
		sum.AddHead(tinh % 10);
		rem = tinh / 10;
		a1 = a1->pPrev;
		b1 = b1->pPrev;
	}
	if (rem != 0)
		sum.AddHead(rem);
	return sum;
}

SoNguyenLon operator-(SoNguyenLon a, SoNguyenLon b)
{
	SoNguyenLon dif;
	int rem = 0;
	bool check = false;
	if (dif.check(a, b)==false)
	{
		swap(a, b);
		check = true;
	}
	while (a.num > b.num)
		b.AddHead(0);
	Node* a1 = a.pTail;
	Node* b1 = b.pTail;
	for (int i = a.num - 1; i >= 0; i--)
	{
		int sub = a1->val - b1->val - rem;
		if (sub < 0)
		{
			dif.AddHead(sub + 10);
			rem = 1;
		}
		else
		{
			dif.AddHead(sub);
			rem = 0;
		}
		a1 = a1->pPrev;
		b1 = b1->pPrev;
	}
	if (check)
		dif.sign = '-';
	return dif;
}

SoNguyenLon operator*(SoNguyenLon a, SoNguyenLon b)
{
	SoNguyenLon res;
	int rem = 0, n = 0;

	Node* b1 = b.pTail;
	while (b1 != nullptr)
	{
		SoNguyenLon temp;
		Node* a1 = a.pTail;
		
		while (a1 != nullptr)
		{
			int tinh = a1->val * b1->val + rem;
			temp.AddHead(tinh % 10);
			rem = tinh / 10;
			a1 = a1->pPrev;
		}
		
		for (int i = 0; i < n; i++)
			temp.AddTail(0);

		res = res + temp;
		b1 = b1->pPrev;
		n++;
	}

	Node* p = res.pHead;
	while (p->val == 0)
	{
		res.RemoveHead();
		p = p->pNext;
	}

	return res;
}

ostream& operator << (ostream& os, const SoNguyenLon& bi)
{
	if (bi.pHead == nullptr)
		return os << 0;
	os << bi.sign;
	Node* p = bi.pHead;
	while (p != nullptr)
	{
		os << p->val;
		p = p->pNext;
	}
	return os;
}