#include<iostream>
#include "tetragon.h"
using std::cout;
using std::endl;

Tetragon::Tetragon(const double & t0_x, const double & t0_y, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y, const double & t3_x, const double & t3_y)
{
	this->SetTetragon(t0_x, t0_y, t1_x, t1_y, t2_x, t2_y, t3_x, t3_y);
}

Tetragon::Tetragon(const Point & p1, const Point & p2, const Point & p3, const Point & p4)
{
	this->SetTetragon(p1,p2,p3,p4);
}

Tetragon::Tetragon(const Point & p1, const Point & p2, const Point & p3, const double & t3_x, const double & t3_y)
{
	this->SetTetragon(p1,p2,p3, t3_x, t3_y);
}

Tetragon::Tetragon(const Point & p1, const Point & p2, const double & t2_x, const double & t2_y, const double & t3_x, const double & t3_y)
{
	this->SetTetragon(p1,p2, t2_x, t2_y, t3_x, t3_y);
}

Tetragon::Tetragon(const Point & p1, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y, const double & t3_x, const double & t3_y)
{
	this->SetTetragon(p1, t1_x, t1_y, t2_x, t2_y, t3_x, t3_y);
}

Tetragon::Tetragon(const Tetragon & t)
{
	this->SetTetragon(t);
}

void Tetragon::SetTetragon(const double& t0_x, const double& t0_y, const double& t1_x, const double& t1_y, const double& t2_x, const double& t2_y, const double& t3_x, const double& t3_y)
{
	this->t[0].SetPoint(t0_x, t0_y);
	this->t[1].SetPoint(t1_x, t1_y);
	this->t[2].SetPoint(t2_x, t2_y);
	this->t[3].SetPoint(t3_x, t3_y);
}

void Tetragon::SetTetragon(const Point & p1, const Point & p2, const Point & p3, const Point & p4)
{
	this->t[0].SetPoint(p1.GetX(), p1.GetY());
	this->t[1].SetPoint(p2.GetX(), p2.GetY());
	this->t[2].SetPoint(p3.GetX(), p3.GetY());
	this->t[3].SetPoint(p4.GetX(), p4.GetY());
}

void Tetragon::SetTetragon(const Point & p1, const Point & p2, const Point & p3, const double & t3_x, const double & t3_y)
{
	this->t[0].SetPoint(p1.GetX(), p1.GetY());
	this->t[1].SetPoint(p2.GetX(), p2.GetY());
	this->t[2].SetPoint(p3.GetX(), p3.GetY());
	this->t[3].SetPoint(t3_x, t3_y);
}

void Tetragon::SetTetragon(const Point & p1, const Point & p2, const double & t2_x, const double & t2_y, const double & t3_x, const double & t3_y)
{
	this->t[0].SetPoint(p1.GetX(), p1.GetY());
	this->t[1].SetPoint(p2.GetX(), p2.GetY());
	this->t[2].SetPoint(t2_x, t2_y);
	this->t[3].SetPoint(t3_x, t3_y);
}

void Tetragon::SetTetragon(const Point & p1, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y, const double & t3_x, const double & t3_y)
{
	this->t[0].SetPoint(p1.GetX(), p1.GetY());
	this->t[1].SetPoint(t1_x, t1_y);
	this->t[2].SetPoint(t2_x, t2_y);
	this->t[3].SetPoint(t3_x, t3_y);
}

void Tetragon::SetTetragon(const Tetragon & t)
{
	this->t[0].SetPoint(t.GetP0());
	this->t[1].SetPoint(t.GetP1());
	this->t[2].SetPoint(t.GetP2());
	this->t[3].SetPoint(t.GetP3());
}

void Tetragon::SetP0(const double & x, const double & y)
{
	this->t[0].SetX(x);
	this->t[0].SetY(y);
}

void Tetragon::SetP0(const Point & p)
{
	this->t[0].SetPoint(p.GetX(), p.GetY());
}

void Tetragon::SetP1(const double & x, const double & y)
{
	this->t[1].SetX(x);
	this->t[1].SetY(y);
}

void Tetragon::SetP1(const Point & p)
{
	this->t[1].SetPoint(p.GetX(), p.GetY());
}

void Tetragon::SetP2(const double & x, const double & y)
{
	this->t[2].SetX(x);
	this->t[2].SetY(y);
}

void Tetragon::SetP2(const Point & p)
{
	this->t[2].SetPoint(p.GetX(), p.GetY());
}

void Tetragon::SetP3(const double & x, const double & y)
{
	this->t[3].SetX(x);
	this->t[3].SetY(y);
}

void Tetragon::SetP3(const Point & p)
{
	this->t[3].SetPoint(p.GetX(), p.GetY());
}

Tetragon Tetragon::GetTetragon(void) const
{
	return Tetragon(this->GetP0(), this->GetP1(), this->GetP2(), this->GetP3());
}

Point Tetragon::GetP0(void) const
{
	return Point(this->t[0].GetPoint());
}

Point Tetragon::GetP1(void) const
{
	return Point(this->t[1].GetPoint());
}

Point Tetragon::GetP2(void) const
{
	return Point(this->t[2].GetPoint());
}

Point Tetragon::GetP3(void) const
{
	return Point(this->t[3].GetPoint());
}

double Tetragon::GetArea(void) const
{
		
	return 0.0;
}

double Tetragon::GetRound(void) const
{
	return 0.0;
}

void Tetragon::ShowData(void) const
{
	cout << "t[0].x : " << this->GetP0().GetX() << endl;
	cout << "t[0].y : " << this->GetP0().GetY() << endl;
	cout << "t[1].x : " << this->GetP1().GetX() << endl;
	cout << "t[1].y : " << this->GetP1().GetY() << endl;
	cout << "t[2].x : " << this->GetP2().GetX() << endl;
	cout << "t[2].y : " << this->GetP2().GetY() << endl;
	cout << "t[3].x : " << this->GetP3().GetX() << endl;
	cout << "t[3].y : " << this->GetP3().GetY() << endl;
}

int Tetragon::BubbleSort(const Point & p1, const Point & p2, const Point & p3, const Point & p4)
{
	double d1 = p1.Distance(p2);
	double d2 = p2.Distance(p3);
	double d3 = p3.Distance(p4);
	double d4 = p4.Distance(p1);
	double d[4] = { d1,d2,d3,d4 };
	double temp;
	p1.GetX;
	p1.GetY;
	p2.GetX;
	p2.GetY;
	p3.GetX;
	p3.GetY;dasdasd
	p4.GetX;
	p4.GetY;

}

void Tetragon::SetDefault(void)
{
	this->t[0].SetPoint(0, 0);
	this->t[1].SetPoint(1, 0);
	this->t[2].SetPoint(1, 1);
	this->t[3].SetPoint(0, 1);
}
/*
Tetragon::~Tetragon()
{
}
*/