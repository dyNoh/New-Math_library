#include <iostream>
#include "triangle.h"
using std::cout;
using std::endl;

Triangle::Triangle(const double & t0_x, const double & t0_y, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
	this->SetTriangle(t0_x, t0_y, t1_x, t1_y, t2_x, t2_y);
}

Triangle::Triangle(const Point & p1, const Point & p2, const Point & p3)
{
	this->SetTriangle(p1, p2, p3);
}

Triangle::Triangle(const Point & p1, const Point & p2, const double & t2_x, const double & t2_y)
{
	this->SetTriangle(p1, p2, t2_x, t2_y);
}

Triangle::Triangle(const Point & p1, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
	this->SetTriangle(p1, t1_x, t1_y, t2_x, t2_y);
}

Triangle::Triangle(const Triangle & t)
{
	this->SetTriangle(t);
}

void Triangle::SetTriangle(const double & t0_x, const double & t0_y, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
	this->t[0].SetPoint(t0_x, t0_y);
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

void Triangle::SetTriangle(const Triangle & t)
{
	this->t[0].SetPoint(t.GetP0());
	this->t[1].SetPoint(t.GetP1());
	this->t[2].SetPoint(t.GetP2());
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
	return Triangle(this->GetP0(), this->GetP1(), this->GetP2());
}

Point Triangle::GetP0(void) const
{
	return Point(this->t[0].GetPoint());
}

Point Triangle::GetP1(void) const
{
	return Point(this->t[1].GetPoint());
}

Point Triangle::GetP2(void) const
{
	return Point(this->t[2].GetPoint());
}

double Triangle::GetArea(void) const
{
	double value = (0.5)*(((this->t[0].GetX())*(this->t[1].GetY()) + (this->t[1].GetX())*(this->t[2].GetY()) +
		(this->t[2].GetX())*(this->t[0].GetY())) - ((this->t[0].GetX())*(this->t[2].GetY()) +
		(this->t[2].GetX())*(this->t[1].GetY()) + (this->t[1].GetX())*(this->t[0].GetY())));

	if (this->t[0].GetX() == this->t[1].GetX() == this->t[2].GetX() || this->t[0].GetY() == this->t[1].GetY() == this->t[2].GetY()) {
		cout << "This is not Triangle." << endl;
		return 0;
	}
	else if (this->t[0].GetX() == this->t[0].GetY() && this->t[1].GetX() == this->t[1].GetY() && this->t[2].GetX() == this->t[2].GetY()) {
		cout << "This is not Triangle." << endl;
		return 0;
	}
	else
	{
		if (value < 0)
		{
			return -(value);
		}
		return value;
	}
}

double Triangle::GetRound(void) const
{
	if (this->t[0].GetX() == this->t[1].GetX() == this->t[2].GetX() || this->t[0].GetY() == this->t[1].GetY() == this->t[2].GetY()) {
		cout << "This is not Triangle." << endl;
		return 0;
	}
	else if (this->t[0].GetX() == this->t[0].GetY() && this->t[1].GetX() == this->t[1].GetY() && this->t[2].GetX() == this->t[2].GetY()) {
		cout << "This is not Triangle." << endl;
		return 0;
	}
	else
	{
		return this->t[0].Distance(this->t[1]) + this->t[1].Distance(this->t[2]) + this->t[2].Distance(this->t[0]);
	}
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
