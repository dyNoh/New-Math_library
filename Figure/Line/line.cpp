#include "line.h"

Line::Line(const double & l0_x, const double & l0_y, const double & l1_x, const double & l1_y)
{
	this->SetLine(l0_x, l0_y, l1_x, l1_y);
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
	this->l[0].SetPoint(l0_x, l0_y);
	this->l[1].SetPoint(l1_x, l1_y);

	if (Exception(l[0], l[1]))
	{
		SetDefault();
	}
}

void Line::SetLine(const Point & p1, const Point & p2)
{
	this->l[0].SetPoint(p1.GetX(),p1.GetY());
	this->l[1].SetPoint(p2.GetX(),p2.GetY());

	if (Exception(l[0], l[1]))
	{
		SetDefault();
	}
}

void Line::SetLine(const Point & p1, const double & l1_x, const double & l1_y)
{
	this->l[0].SetPoint(p1.GetX(),p1.GetY());
	this->l[1].SetPoint(l1_x,l1_y);

	if (Exception(l[0], l[1]))
	{
		SetDefault();
	}
}

void Line::SetLine(const Line & l)
{
	this->l[0].SetPoint(l.GetP0());
	this->l[1].SetPoint(l.GetP1());

	if (Exception(l.GetP0(), l.GetP1()))
	{
		SetDefault();
	}
}

void Line::SetP0(const double & x, const double & y)
{
	this->l[0].SetX(x);
	this->l[0].SetY(y);
}

void Line::SetP0(const Point & p)
{
	this->l[0].SetPoint(p.GetX(), p.GetY());
}

void Line::SetP1(const double & x, const double & y)
{
	this->l[1].SetX(x);
	this->l[1].SetY(y);
}

void Line::SetP1(const Point & p)
{
	this->l[1].SetPoint(p.GetX(), p.GetY());
}

Line Line::GetLine(void) const
{
	return Line(this->GetP0(),this->GetP1());
}

Point Line::GetP0(void) const
{
	return Point(this->l[0].GetPoint());
}

Point Line::GetP1(void) const
{
	return Point(this->l[1].GetPoint());
}

double Line::Distance(void) const
{
	return 0.0;
}

void Line::ShowData(void) const
{
	cout << "l[0].x : " << this->GetP0().GetX() << endl;
	cout << "l[0].y : " << this->GetP0().GetY() << endl;
	cout << "l[1].x : " << this->GetP1().GetX() << endl;
	cout << "l[1].y : " << this->GetP1().GetY() << endl;
}

Line::~Line()
{
}

int Line::Exception(const Point & p1, const Point & p2)
{
	if (p1.GetX() == p2.GetX() &&p1.GetY()==p2.GetY())
	{
		return 1;
	}
	return 0;
}
void Line::SetDefault(void)
{
	this->l[0].SetPoint(0, 0);
	this->l[1].SetPoint(1, 1);
}
