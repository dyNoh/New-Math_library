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

void Circle::setCircle(const double & x, const double & y, const double & r)
{
}

void Circle::setCircle(const Point & p, const double & r)
{
}

void Circle::setCircle(const Circle & c)
{
}

void Circle::setCenter(const Point & p)
{
}

void Circle::setCenter(const double & x, const double & y)
{
}

void Circle::setR(const double & r)
{
}

Circle Circle::getCircle(void) const
{
	return Circle();
}

Point Circle::getPoint(void) const
{
	return Point();
}

double Circle::getR(void) const
{
	return 0.0;
}

double Circle::getArea(void) const
{
	return 0.0;
}

double Circle::getRound(void) const
{
	return 0.0;
}

void Circle::showData(void)
{
	cout << "x : " << getPoint().getX() << endl;
	cout << "y : " << getPoint().getY() << endl;
	cout << "r : " << getR() << endl;
}

Circle::~Circle()
{
}
