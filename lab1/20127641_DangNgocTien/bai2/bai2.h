#include <iostream>
using namespace std;

class ThoiGian
{
private:
    int hour;
    int minute;
    int second;

public:
    ThoiGian()
    {
        this->hour = 0;
        this->minute = 0;
        this->second = 0;
    }
    ThoiGian(int second)
    {
        if (second < 60)
        {
            this->hour = this->minute = 0;
            this->second = second;
        }
        else if (second >= 60 && second < 3600)
        {
            this->hour = 0;
            this->minute = (second - second % 60) / 60;
            this->second = second % 60;
        }
        else
        {
            this->hour = (second - second % 3600) / 3600;
            this->minute = ((second % 3600) - (second % 3600) % 60) / 60;
            this->second = second - this->minute * 60 - this->hour * 3600;
        }
    }

    ThoiGian(int minute, int second)
    {
        if (minute < 0)
            minute = 0;
        if (second < 0)
            second = 0;

        int total = minute * 60 + second;

        if (total < 60)
        {
            this->hour = this->minute = 0;
            this->second = total;
        }
        else if (total >= 60 && total < 3600)
        {
            this->hour = 0;
            this->minute = (total - total % 60) / 60;
            this->second = total % 60;
        }
        else
        {
            this->hour = (total - total % 3600) / 3600;
            this->minute = ((total % 3600) - (total % 3600) % 60) / 60;
            this->second = total - this->minute * 60 - this->hour * 3600;
        }
    }

    ThoiGian(int hour, int minute, int second)
    {
        if (hour < 0)
            hour = 0;
        if (minute < 0)
            minute = 0;
        if (second < 0)
            second = 0;

        int total = hour * 3600 + minute * 60 + second;

        if (total < 60)
        {
            this->hour = this->minute = 0;
            this->second = total;
        }
        else if (total >= 60 && total < 3600)
        {
            this->hour = 0;
            this->minute = (total - total % 60) / 60;
            this->second = total % 60;
        }
        else
        {
            this->hour = (total - total % 3600) / 3600;
            this->minute = ((total % 3600) - (total % 3600) % 60) / 60;
            this->second = total - this->minute * 60 - this->hour * 3600;
        }
    }

    void Xuat()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};