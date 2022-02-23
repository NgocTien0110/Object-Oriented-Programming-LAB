#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class MyString
{
private:
	string s;

public:
	MyString();
	MyString(const char*);
	MyString(string);
	~MyString();

	vector<MyString> Split(vector<char> arrChar, bool a);

	friend MyString operator + (const MyString&, const MyString&);
	friend ostream& operator <<(ostream&, const MyString&);
};