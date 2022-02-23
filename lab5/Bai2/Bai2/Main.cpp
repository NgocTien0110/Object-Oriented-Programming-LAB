#include "Header.h"

using namespace std;

int main() 
{
	Count c("vanban.txt");

	cout << "Van ban: \n" << c.PrintDoc() << endl;
	cout << endl << c << endl;

	return 0;
}