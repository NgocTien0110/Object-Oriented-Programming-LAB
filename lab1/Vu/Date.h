#ifndef  DATE
#define DATE
#include<iostream>
using namespace std;

class CDate
{
private:
	int date;
	int month;
	int years;
public:
	CDate()
	{
		date = month = years = 1;
	}
	CDate(int c_date, int c_month, int c_years)
	{

		if (c_month == 2)
		{
			if (isLeapYear(c_month))
			{
				if (c_date <= 0)
					date = 1;
				else if (c_date > 29)
					date = 29;
				else
					date = c_date;
				years = c_years;
				month = c_month;
			}
			else
			{
				if (c_date <= 0)
					date = 1;
				else if (c_date > 28)
					date = 28;
				else
					date = c_date;
				years = c_years;
				month = c_month;
			}
		}
		else
		{
			if (c_month <= 0)
				month = 1;
			else if (c_month > 12)
				month = 12;
			else
				month = c_month;
			if (is31Days(month))
			{
				if (c_date <= 0)
					date = 1;
				else if (c_date > 31)
					date = 31;
				else
					date = c_date;
			}
			else
			{
				if (c_date <= 0)
					date = 1;
				else if (c_date > 30)
					date = 30;
				else
					date = c_date;
			}
			years = c_years;

		}
		
	}
	CDate(int c_date)
	{
		int tempDate = c_date / 365;
		years = tempDate + 1;
		tempDate = c_date - 365 * tempDate;
		int run = 0;
		int tempMonth = 1;
		int tempDate1 = 1;
		bool chanTri = false;
		while (tempDate != 0)
		{
			if (tempMonth == 2)
			{
				if (isLeapYear(years))
				{
					if (run == 29)
					{
						tempMonth++;
						run = 1;
						chanTri = true;
					}
				}
				else
				{
					if (run == 28)
					{
						tempMonth++;
						run = 1;
						chanTri = true;
					}
				}
			}
			else if (is31Days(tempMonth))
			{
				if (run == 31)
				{
					tempMonth++;
					run = 1;
					chanTri = true;
				}
			}
			else
			{
				if (run == 30)
				{
					tempMonth++;
					run = 1;
					chanTri = true;
				}
			}

			run++;
			tempDate--;
			
		}
		if (run == 0)
			date = 1;
		else
			date = run;
		if (tempMonth > 1)
			month = tempMonth - 1;
		else
			month = tempMonth;
	}
	bool isLeapYear(int c_years)
	{
		if (c_years % 4 == 0)
		{
			if (c_years % 100 == 0)
			{
				if (c_years % 400 == 0)
					return true;
				return false;
			}
			return true;
		}
		return false;
	}
	bool is31Days(int c_month)
	{
		if (c_month == 1 || c_month == 3 || c_month == 5 ||
			c_month == 7 || c_month == 8 || c_month == 10 ||
			c_month == 12)
			return true;
		return false;
	}
	void print() const
	{
		cout << date << "/" << month << "/" << years  << endl;
	}
};

#endif // ! DATE
