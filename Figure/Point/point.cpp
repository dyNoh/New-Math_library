#include "point.h"

Point::Point(double x, double y)
{
    this->x = x;
	this->y = y;
}

void Point::setPoint(const double & x, const double & y)
{
    this->x = x;
	this->y = y;
}

void Point::setPoint(const Point & p)
{
    this->x = p.x;
    this->y = p.y;
}

void Point::setX(const double x)
{
}

void Point::setY(const double y)
{
}

Point Point::getPoint(void) const
{
	return Point();
}

double Point::getX(void) const
{
	return 0.0;
}

double Point::getY(void) const
{
	return 0.0;
}

double Point::distance(Point & p)
{
	return 0.0;
}
