#include "triangle.h"

Triangle::Triangle(const double & t0_x, const double & t0_y, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
	this->t[0].SetPoint(t0_x, t0_x);
	this->t[1].SetPoint(t1_x, t1_y);
	this->t[2].SetPoint(t2_x, t2_y);
}

Triangle::Triangle(const Point & p1, const Point & p2, const Point & p3)
{
	this->t[0].SetPoint(p1.GetX(), p1.GetY());
	this->t[1].SetPoint(p2.GetX(), p2.GetY());
	this->t[2].SetPoint(p3.GetX(), p3.GetY());
}

Triangle::Triangle(const Point & p1, const Point & p2, const double & t2_x, const double & t2_y)
{
	this->t[0].SetPoint(p1.GetX(), p1.GetY());
	this->t[1].SetPoint(p2.GetX(), p2.GetY());
	this->t[2].SetPoint(t2_x, t2_y);
}

Triangle::Triangle(const Point & p1, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
	this->t[0].SetPoint(p1.GetX(), p1.GetY());
	this->t[1].SetPoint(t1_x, t1_y);
	this->t[2].SetPoint(t2_x, t2_y);
}

void Triangle::SetTriangle(const double & t0_x, const double & t0_y, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
	this->t[0].SetPoint(t0_x, t0_x);
	this->t[1].SetPoint(t1_x, t1_y);
	this->t[2].SetPoint(t2_x, t2_y);
}

void Triangle::SetTriangle(const Point & p1, const Point & p2, const Point & p3)
{
	this->t[0].SetPoint(p1.GetX(), p1.GetY());
	this->t[1].SetPoint(p2.GetX(), p2.GetY());
	this->t[2].SetPoint(p3.GetX(), p3.GetY());
}

void Triangle::SetTriangle(const Point & p1, const Point & p2, const double & t2_x, const double & t2_y)
{
	this->t[0].SetPoint(p1.GetX(), p1.GetY());
	this->t[1].SetPoint(p2.GetX(), p2.GetY());
	this->t[2].SetPoint(t2_x, t2_y);
}

void Triangle::SetTriangle(const Point & p1, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
	this->t[0].SetPoint(p1.GetX(), p1.GetY());
	this->t[1].SetPoint(t1_x, t1_y);
	this->t[2].SetPoint(t2_x, t2_y);
}

void Triangle::SetP0(const double & x, const double & y)
{
	this->t[0].SetX(x);
	this->t[0].SetY(y);
}

void Triangle::SetP0(const Point & p)
{
	this->t[0].SetPoint(p.GetX(), p.GetY());
}

void Triangle::SetP1(const double & x, const double & y)
{
	this->t[1].SetX(x);
	this->t[1].SetY(y);
}

void Triangle::SetP1(const Point & p)
{
	this->t[1].SetPoint(p.GetX(), p.GetY());
}

void Triangle::SetP2(const double & x, const double & y)
{
	this->t[2].SetX(x);
	this->t[2].SetY(y);
}

void Triangle::SetP2(const Point & p)
{
	this->t[2].SetPoint(p.GetX(), p.GetY());
}

Triangle Triangle::GetTriangle(void) const
{
	return Triangle();
}

Point Triangle::GetP0(void) const
{
	return Point();
}

Point Triangle::GetP1(void) const
{
	return Point();
}

Point Triangle::GetP2(void) const
{
	return Point();
}

double Triangle::GetArea(void) const
{
	return (1/2)*(((this->t[0].GetX())*(this->t[1].GetY()) + (this->t[1].GetX())*(this->t[2].GetY()) +
	            (this->t[2].GetX())*(this->t[0].GetY())) - ((this->t[0].GetX())*(this->t[2].GetY()) +
						  (this->t[2].GetX())*(this->t[1].GetY()) + (this->t[1].GetX())*(this->t[0].GetY())));
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
}

Triangle::~Triangle()
{
}
