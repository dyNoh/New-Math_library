#include <iostream>
#include "circle.h"

using std::cout;
using std::endl;

Circle::Circle(double x, double y, double r)
{
	this->x = x;
	this->y = y;
	this->r = r;

}

Circle::Circle(const Point & p, const double & r)
{
	this->p->x = p.x;
	this->p->y = p.y;
	this->r = r;

}

Circle::Circle(const Circle & c)
{
	this->p->x = c.p->x;
	this->p->y = c.p->y;
}

void Circle::SetCircle(const double & x, const double & y, const double & r)
{
	this->x = x;
	this->y = y;
	this->r = r;
}

void Circle::SetCircle(const Point & p, const double & r)
{
	this->p->x = p.x;
	this->p->y = p.y;
	this->r = r;
}

void Circle::SetCircle(const Circle & c)
{
	this->p->x = c.p->x;
	this->p->y = c.p->y;
}

void Circle::SetCenter(const Point & p)
{
	this->p->x = p.x;
	this->p->y = p.y;
}

void Circle::SetCenter(const double & x, const double & y)
{
	this->x=x;
	this->y=y;
}

void Circle::SetR(const double & r)
{
	this->r=r;
}

Circle Circle::GetCircle(void) const
{
	return Circle(this->p->x,this->p->y);
}

Point Circle::GetPoint(void) const
{
	return Point(this->x,this->y);
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
	cout << "x : " << GetPoint().GetX() << endl;
	cout << "y : " << GetPoint().GetY() << endl;
	cout << "r : " << GetR() << endl;
}

Circle::~Circle()
{
}
