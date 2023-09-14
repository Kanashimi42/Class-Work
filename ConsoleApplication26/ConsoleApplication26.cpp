#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point a(4, 2);
	Point b(3, 4);

	Point rez = a.operator + (b);
	rez.Print();
	rez = a + 10;
	rez.Print();
	rez = a - b;
	rez.Print();
	rez = a.operator-(10);
	rez.Print();
	rez = a.operator*(b);
	rez.Print();
	rez = a.operator*(10);
	rez.Print();
	rez = a.operator/(b);
	rez.Print();
	rez = a.operator/(2);
	rez.Print();
	int div = a / 2;
	cout << div << "!" << endl;

}