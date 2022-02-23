#include <iostream>
#include <cmath>
using namespace std;

class Ngay
{
private:
    int day;
    int month;
    int year;

public:
    Ngay()
    {
        this->day = 1;
        this->month = 1;
        this->year = 1;
    }
    Ngay(int day)
    {
        int year = day / 365;
        int dayleft = (day % 365);
        int month = 1;

        int namnhuan = 0;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            namnhuan = 1;
        while (dayleft > 0)
        {

            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                dayleft -= 31;
                if (dayleft < 0)
                {
                    dayleft += 31;
                    break;
                }
                else
                    month += 1;
            }
            if (month == 2)
            {
                if (namnhuan == 1)
                {
                    dayleft -= 29;
                    if (dayleft < 0)
                    {
                        dayleft += 28;
                        break;
                    }
                    else
                        month += 1;
                }

                if (namnhuan == 0)
                {
                    dayleft -= 28;
                    if (dayleft < 0)
                    {
                        dayleft += 28;
                        break;
                    }
                    else
                        month += 1;
                }
            }
            if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                dayleft -= 30;
                if (dayleft < 0)
                {
                    dayleft += 30;
                    break;
                }
                else
                    month += 1;
            }
        }
        this->day = dayleft;
        this->month = month;
        this->year = year;
    }
    Ngay(int day, int month, int year)
    {
        if (year < 1)
            this->year = 1;
        else
            this->year = year;

        if (month > 12)
        {
            this->year += month / 12;
            month %= 12;
        }
        else if (month < 1)
            month = 1;

        this->month = month;

        if (day < 1)
            this->day = abs(day);
        else
        {
            switch (month)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            {
                if (day > 31)
                    this->day = 31;
                else
                    this->day = day;
                break;
            }
            case 4:
            case 6:
            case 9:
            case 11:
            {
                if (day > 30)
                    this->day = 30;
                else
                    this->day = day;
                break;
            }
            case 2:
            {
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                {
                    if (day > 29)
                        this->day = 29;
                    else
                        this->day = day;
                }
                else
                {
                    if (day > 28)
                        this->day = 28;
                    else
                        this->day = day;
                }
            }
            }
        }
    }

    Ngay operator+(const Ngay &data)
    {
        Ngay n = *this;
    }

    friend ostream &operator<<(ostream &os, const Ngay &date)
    {
        os << date.day << "/" << date.month << "/" << date.year;
        return os;
    }
    void Xuat()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};