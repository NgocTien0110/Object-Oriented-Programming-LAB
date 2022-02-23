#include "Header.h"


MyString::MyString(){}


MyString::MyString(const char *arr)
{
	s = arr;
}

MyString::MyString(string a)
{
    s = a;
}

MyString::~MyString() {}

bool check(const char c, vector<char> arr) {
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == c)
            return false;
    }
    return true;
}
vector<MyString> MyString::Split(vector<char> arr, bool a)
{
	vector<MyString> res;

    if (a == 0) {
        string a = "";
        for (int i = 0; i < s.size(); i++) {
            if (!check(s[i], arr)) {
                res.push_back(MyString(a));
                a = "";
                continue;
            }
            a += s[i];
        }
        for (int i = 0; i < arr.size(); i++) {
            if (s[s.size() - 1] == arr[i]) {
                res.push_back(MyString(""));
            }
        }
    }
    else
    {
        string a = "";
        for (int i = 0; i < s.size(); i++) {
            if (!check(s[i], arr))
            {
                if (a != "") {
                    res.push_back(MyString(a));
                    a = "";
                    continue;
                }
                else {
                    a = "";
                    continue;
                }
            }
            a += s[i];
        }
    }

	return res;

}

MyString operator+(const MyString& ms1, const MyString& ms2)
{
	MyString t;
	t.s = ms1.s + ms2.s;
	return t;
}

ostream& operator << (ostream& os, const MyString& ms)
{
	 os << ms.s;
	 return os;
}