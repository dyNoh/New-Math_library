#include <iostream>
#include "point.h"

using std::cout;
using std::endl;

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point & p)
{
	this->x = p.x;
	this->y = p.y;
}

void Point::SetPoint(const double & x, const double & y)
{
	this->x = x;
	this->y = y;
}

void Point::SetPoint(const Point & p)
{
	this->x = p.x;
	this->y = p.y;
}

void Point::SetX(const double& x)
{
	this->x = x;
}

void Point::SetY(const double& y)
{
	this->y = y;
}

Point Point::GetPoint(void) const
{
	return Point();
}

double Point::GetX(void) const
{
	return 0.0;
}

double Point::GetY(void) const
{
	return 0.0;
}

double Point::Distance(const Point & p)
{
	return 0.0;
}

void Point::ShowData(void) const
{
	cout << "x : " << getX() << endl;
	cout << "y : " << getY() << endl;
}

Point::~Point()
{
}
