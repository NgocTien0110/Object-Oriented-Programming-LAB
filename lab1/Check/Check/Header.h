#include <iostream>
using namespace std;

class MangSoNguyen
{
private:
    int n;
    int a[10000];
    
public:
    MangSoNguyen()
    {
        this->n = 0;
    }

    MangSoNguyen(int a)
    {
        this->n = 1;
        this->a[0] = a;
    }

    MangSoNguyen(int a[], int n)
    {
        this->n = n;
        for (int i = 0; i < n; i++)
        {
            this->a[i] = a[i];
        }
    }
    MangSoNguyen(MangSoNguyen &msn)
    {
        this->n = msn.n;
        for (int i = 0; i < n; i++)
        {
            this->a[i] = msn.a[i];
        }
    }

    ~MangSoNguyen() {}

    void Xuat()
    {
        if (n == 0)
            cout << "Mang rong";
        else
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        cout << endl;
    }
};
