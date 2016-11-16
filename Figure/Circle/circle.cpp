#include <iostream>
#include "circle.h"

using std::cout;
using std::endl;

Circle::Circle(double x, double y, double r)
{
	this->SetCircle(x,y,r);

}

Circle::Circle(const Point & p, const double & r)
{
	this->SetCircle(p,r);

}

Circle::Circle(const Circle & c)
{
	this->SetCircle(c);
}

void Circle::SetCircle(const double & x, const double & y, const double & r)
{
	this->p.SetPoint(x, y);
	this->r = r;
}

void Circle::SetCircle(const Point & p, const double & r)
{
	this->p.SetPoint(p);
	this->r = r;
}

void Circle::SetCircle(const Circle & c)
{
	this->p.SetPoint(c.p);
	this->r = c.r;
}

void Circle::SetCenter(const Point & p)
{
	this->p.SetPoint(p);
}

void Circle::SetCenter(const double & x, const double & y)
{
	this->p.SetPoint(p);
}

void Circle::SetR(const double & r)
{
	this->r = r;
}

Circle Circle::GetCircle(void) const
{
	return Circle(this->p, this->r);
}

Point Circle::GetPoint(void) const
{
	return Point(this->p);
}

double Circle::GetR(void) const
{
	return this->r;
}

double Circle::GetArea(void) const
{
	return (2 * PI * GetR());
}

double Circle::GetRound(void) const
{
	return (PI * Pow(GetR()));
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
