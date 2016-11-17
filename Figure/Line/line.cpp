#include "line.h"

Line::Line(const double & l0_x, const double & l0_y, const double & l1_x, const double & l1_y)
{
	this->SetLine(lo_x, l0_y, l1_x, l1_y);
}

Line::Line(const Point & p1, const Point & p2)
{
	this->SetLine(p1, p2);
}

Line::Line(const Point & p1, const double & l1_x, const double & l1_y)
{
	this->SetLine(p1, l1_x, l1_y);
}

Line::Line(const Line & l)
{
	this->SetLine(l);
}

void Line::SetLine(const double & l0_x, const double & l0_y, const double & l1_x, const double & l1_y)
{
	this->l[0].SetLine(lo_x, l0_y);
	this->l[1].SetLine(l1_x, l1_y);
}

void Line::SetLine(const Point & p1, const Point & p2)
{
	this->l[0].SetLine(p1.GetX(),p1.GetY());
	this->l[1].SetLine(p2.GetX(),p2.GetY());
}

void Line::SetLine(const Point & p1, const double & l1_x, const double & l1_y)
{
	this->l[0].SetLine(p1.GetX(),p1.GetY());
	this->l[1].SetLine(l1_x,l1_y);
}

void Line::SetLine(const Line & l)
{
	this->l[0].SetLine(l.GetP0());
	this->l[1].SetLine(l.GetP1());
}

void Line::SetP0(const double & x, const double & y)
{
	this->l[0].SetLine(x);
	this->l[0].SetLine(y);
}

void Line::SetP0(const Point & p)
{
	this->l[0].SetLine(p.GetX(),p.GetY());
}

void Line::SetP1(const double & x, const double & y)
{
	this->l[1].SetLine(x);
	this->l[1].SetLine(y);
}

void Line::SetP1(const Point & p)
{
	this->l[0].SetLine(p.GetX(),p.GetY());
}

Line Line::GetLine(void) const
{
	return Line(this->GetP0(),this->GetP1());
}

Point Line::GetP0(void) const
{
	return Point(this->l[0].GetLine());
}

Point Line::GetP1(void) const
{
	return Point(this->l[1].GetLine());
}

double Line::Distance(void) const
{
	return 0.0;
}

Line::~Line()
{
}
