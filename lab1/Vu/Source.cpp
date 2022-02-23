#include<iostream>
#include "Date.h"
using namespace std;

int main()
{
	CDate day1;
	day1.print();
	CDate day2(2, 10, 2014);
	day2.print();
	CDate day3(-10, 16, 2000);
	day3.print();
	CDate day4(1000);
	day4.print();
	CDate day5(365);
	day5.print();
	CDate day6(30);
	day6.print();
}