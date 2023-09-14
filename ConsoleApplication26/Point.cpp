#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(int a, int b)
{
	x = a;
	y = b;
}

void Point::init(int a, int b)
{
	x = a;
	y = b;

}

void Point::Print()
{
	cout << x << "/" << y << endl;
}

Point Point::operator + (Point b)
{
	Point rez;
	rez.x = this->x + b.x;
	rez.y = this->y + b.y;
	return rez;
}

Point Point::operator + (int b)
{
	return Point(this->x + b, this->y + b);
}
Point Point::operator - (Point b)
{
	Point rez;
	rez.x = this->x - b.x;
	rez.y = this->y - b.y;
	return rez;
}

Point Point::operator - (int b)
{
	return Point(this->x - b, this->y - b);
}

Point Point::operator*(Point b)
{
	Point rez;
	rez.x = this->x * b.x;
	rez.y = this->y * b.y;
	return rez;
}

Point Point::operator*(int b)
{
	return Point(this->x * b, this->y * b);
}


Point Point::operator/(Point b)
{
	Point rez;
	rez.x = this->x / b.x;
	rez.y = this->y / b.y;
	return rez;
}
Point Point::operator / (int b)
{
	return Point(this->x / b, this->y / b);
}
