#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node* pPrev;
	Node* pNext;
};

class SoNguyenLon
{
private:
	int num;
	char sign;
	Node* pHead;
	Node* pTail;
public:
	SoNguyenLon();
	SoNguyenLon(int b);
	SoNguyenLon(int a, int b);
	~SoNguyenLon();

	static Node* CreateNode(const int&);
	Node* AddHead(const int&);
	Node* AddTail(const int&);
	Node* RemoveHead();
	bool check(const SoNguyenLon&, const SoNguyenLon&);

	friend SoNguyenLon operator+(SoNguyenLon, SoNguyenLon);
	friend SoNguyenLon operator-(SoNguyenLon, SoNguyenLon);
	friend SoNguyenLon operator*(SoNguyenLon, SoNguyenLon);
	friend ostream& operator <<(ostream&, const SoNguyenLon&);
};
