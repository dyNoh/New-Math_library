#include <iostream>
#include "triangle.h"
using std::cout;
using std::endl;

Triangle::Triangle(const double & t0_x, const double & t0_y, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
	this->t[0]->x = t0_x;
	this->t[0]->y = t0_y;
	this->t[1]->x = t1_x;
	this->t[1]->y = t1_y;
	this->t[2]->x = t2_x;
	this->t[2]->y = t2_y;
}

Triangle::Triangle(const Point & p1, const Point & p2, const Point & p3)
{
	this->t[0]->x = p1.x;
	this->t[0]->y = p1.y;
	this->t[1]->x = p2.x;
	this->t[1]->y = p2.y;
	this->t[2]->x = p3.x;
	this->t[2]->y = p3.y
}

Triangle::Triangle(const Point & p1, const Point & p2, const double & t2_x, const double & t2_y)
{
	this->t[0]->x = p1.x;
	this->t[0]->y = p1.y;
	this->t[1]->x = p2.x;
	this->t[1]->y = p2.y
	this->t[2]->x = t2_x;
	this->t[2]->y = t2_y;
}

Triangle::Triangle(const Point & p1, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
		this->t[0]->x = p1.x;
		this->t[0]->y = p1.y;
		this->t[1]->x = t1_x;
		this->t[1]->y = t1_y;
		this->t[2]->x = t2_x;
		this->t[2]->y = t2_y;
}

void Triangle::SetTriangle(const double & t0_x, const double & t0_y, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
	this->t[0]->x = t0_x;
	this->t[0]->y = t0_y;
	this->t[1]->x = t1_x;
	this->t[1]->y = t1_y;
	this->t[2]->x = t2_x;
	this->t[2]->y = t2_y;
}

void Triangle::SetTriangle(const Point & p1, const Point & p2, const Point & p3)
{
	this->t[0]->x = p1.x;
	this->t[0]->y = p1.y;
	this->t[1]->x = p2.x;
	this->t[1]->y = p2.y;
	this->t[2]->x = p3.x;
	this->t[2]->y = p3.y;
}

void Triangle::SetTriangle(const Point & p1, const Point & p2, const double & t2_x, const double & t2_y)
{
	this->t[0]->x = p1.x;
	this->t[0]->y = p1.y;
	this->t[1]->x = p2.x;
	this->t[1]->y = p2.y
	this->t[2]->x = t2_x;
	this->t[2]->y = t2_y;
}

void Triangle::SetTriangle(const Point & p1, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
	this->t[0]->x = p1.x;
	this->t[0]->y = p1.y;
	this->t[1]->x = t1_x;
	this->t[1]->y = t1_y;
	this->t[2]->x = t2_x;
	this->t[2]->y = t2_y;
}

void Triangle::SetP0(const double & x, const double & y)
{
	this->t[0]->x = x;
	this->t[0]->y = y;
}

void Triangle::SetP0(const Point & p)
{
	this->t[0]->x = p.x;
	this->t[0]->y = p.y;
}

void Triangle::SetP1(const double & x, const double & y)
{
	this->t[1]->x = x;
	this->t[1]->y = y;
}

void Triangle::SetP1(const Point & p)
{
	this->t[1]->x = p.x;
	this->t[1]->y = p.y;
}

void Triangle::SetP2(const double & x, const double & y)
{
	this->t[2]->x = x;
	this->t[2]->y = y;
}

void Triangle::SetP2(const Point & p)
{
	this->t[2]->x = p.x;
	this->t[2]->y = p.y;
}

Triangle Triangle::GetTriangle(void) const
{
	return Triangle(this->GetP0(), this->GetP1(), this->GetP2());
}

Point Triangle::GetP0(void) const
{
	return Point(this->t[0].GetPoint);
}

Point Triangle::GetP1(void) const
{
	return Point(this->t[1].GetPoint);
}

Point Triangle::GetP2(void) const
{
	return Point(this->t[2].GetPoint);
}

double Triangle::GetArea(void) const
{
	return (1/2)*(((this->t[0]->x)*(this->t[1]->y) + (this->t[1]->x)*(this->t[2]->y) +
	            (this->t[2]->x)*(this->t[0]->y)) - ((this->t[0]->x)*(this->t[2]->y) +
						  (this->t[2]->x)*(this->t[1]->y) + (this->t[1]->x)*(this->t[0]->y)));
}

double Triangle::GetRound(void) const
{
	return 0.0;
}

double Triangle::GetCenterOfGravity(void) const
{
	return 0.0;
}

double Triangle::GetOrthcenter(void) const
{
	return 0.0;
}

double Triangle::GetExcenter(void) const
{
	return 0.0;
}

double Triangle::GetIntercenter(void) const
{
	return 0.0;
}

double Triangle::GetCircumcenter(void) const
{
	return 0.0;
}

void Triangle::ShowData(void) const
{
	cout << "t[0].x : " << this->GetP0().GetX() << endl;
	cout << "t[0].y : " << this->GetP0().GetY() << endl;
	cout << "t[1].x : " << this->GetP1().GetX() << endl;
	cout << "t[1].y : " << this->GetP1().GetY() << endl;
	cout << "t[2].x : " << this->GetP2().GetX() << endl;
	cout << "t[2].y : " << this->GetP2().GetY() << endl;
}

Triangle::~Triangle()
{
}
