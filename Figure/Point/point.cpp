#include <iostream>
#include "point.h"
#include "..\..\BasicArith\basicArith.h"

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
	return Point(this->x, this->y);
}

double Point::GetX(void) const
{
	return this->x;
}

double Point::GetY(void) const
{
	return this->y;
}

double Point::Distance(const double & x, const double & y) const
{
	double xDis = this->x - x;
	double yDis = this->y - y;

	if (xDis == 0 && yDis == 0)
	{
		return 0.0;
	}

	return Sqrt(Pow(xDis) + Pow(yDis));
}

double Point::Distance(const Point & p) const
{
	double xDis = this->x - p.x;
	double yDis = this->y - p.y;

	if (xDis == 0 && yDis == 0)
	{
		return 0.0;
	}

	return Sqrt(Pow(xDis) + Pow(yDis));
}

void Point::ShowData(void) const
{
	cout << "x : " << GetX() << endl;
	cout << "y : " << GetY() << endl;
}

Point::~Point()
{
}
