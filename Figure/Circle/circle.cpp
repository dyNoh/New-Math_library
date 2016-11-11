#include <iostream>
#include "circle.h"

using std::cout;
using std::endl;

Circle::Circle(double x, double y, double r)
{
}

Circle::Circle(const Point & p, const double & r)
{
}

Circle::Circle(const Circle & c)
{
}

void Circle::SetCircle(const double & x, const double & y, const double & r)
{
}

void Circle::SetCircle(const Point & p, const double & r)
{
}

void Circle::SetCircle(const Circle & c)
{
}

void Circle::SetCenter(const Point & p)
{
}

void Circle::SetCenter(const double & x, const double & y)
{
}

void Circle::SetR(const double & r)
{
}

Circle Circle::GetCircle(void) const
{
	return Circle();
}

Point Circle::GetPoint(void) const
{
	return Point();
}

double Circle::GetR(void) const
{
	return 0.0;
}

double Circle::GetArea(void) const
{
	return 0.0;
}

double Circle::GetRound(void) const
{
	return 0.0;
}

void Circle::ShowData(void)
{
	cout << "x : " << getPoint().getX() << endl;
	cout << "y : " << getPoint().getY() << endl;
	cout << "r : " << getR() << endl;
}

Circle::~Circle()
{
}
