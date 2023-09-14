#pragma once
class Point
{
	int x;
	int y;
public:
	operator int() const {
		return x;
	}
	Point() = default;
	Point(int a, int b);
	void init(int a, int b);

	void Print();

	Point operator + (Point b);
	Point operator + (int b);
	Point operator - (Point b);
	Point operator - (int b);
	Point operator * (Point b);
	Point operator * (int b);
	Point operator / (Point b);

	Point operator / (int b);
};

