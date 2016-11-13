#include "triangle.h"

Triangle::Triangle(const double & t0_x, const double & t0_y, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
}

Triangle::Triangle(const Point & p1, const Point & p2, const Point & p3)
{
}

Triangle::Triangle(const Point & p1, const Point & p2, const double & t2_x, const double & t2_y)
{
}

Triangle::Triangle(const Point & p1, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
}

void Triangle::SetTriangle(const double & t0_x, const double & t0_y, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
}

void Triangle::SetTriangle(const Point & p1, const Point & p2, const Point & p3)
{
}

void Triangle::SetTriangle(const Point & p1, const Point & p2, const double & t2_x, const double & t2_y)
{
}

void Triangle::SetTriangle(const Point & p1, const double & t1_x, const double & t1_y, const double & t2_x, const double & t2_y)
{
}

void Triangle::SetP0(const double & x, const double & y)
{
}

void Triangle::SetP0(const Point & p)
{
}

void Triangle::SetP1(const double & x, const double & y)
{
}

void Triangle::SetP1(const Point & p)
{
}

void Triangle::SetP2(const double & x, const double & y)
{
}

void Triangle::SetP2(const Point & p)
{
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
	return 0.0;
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
