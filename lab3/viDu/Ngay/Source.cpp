#include "Header.h"
int main()
{
     Ngay n1;                 // 1/1/1
     Ngay n2(02, 10, 2014);   // 2/10/2014
     Ngay n3(-10, 16, 2000);  // 10/04/2001
     Ngay n4(1000);           // 27/9/3
     Ngay n5 = n2 + n3;       // 12/2/4016
     Ngay n6 = n1 + 5000;     // 10/10/15--------
     Ngay n7 = 1234 + n4;     // 14/2/7
     Ngay n8 = 190 + n6 + n7; // 2/7/23--------
     Ngay n8t(2, 7, 23);
     Ngay n9 = n8t - n6;    // 1/9/7------
     Ngay n10 = 12000 - n9; // 9/2/26
     // cout << n10 << endl;
     if (n10 > n6)
     {
          n10 = n2 - 1000 + n6;
     }
     cout << n1 << endl
          << n2 << endl
          << n3 << endl
          << n4 << endl;
     cout << n5 << endl
          << n6 << endl
          << n7 << endl
          << n8 << endl;
     cout << n9 << endl
          << n10 << endl;

       Ngay a(2234);
     cout << "ngay 1234 la: " << a << endl;
     cout << a << " chuyen sang ngay: " << a.toDay(a) << endl;

     // cout << n8 << " chuyen sang ngay: " << n8t.toDay(n8t) << endl;
     // cout << n6 << " chuyen sang ngay: " << n6.toDay(n6) << endl;
     // cout << n8.toDay(n8t) - n6.toDay(n6);
     // Ngay n(2822);
     // cout << endl
     //      << n << endl;

     return 0;
}