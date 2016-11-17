#include "line.h"

Line::Line(const double & l0_x, const double & l0_y, const double & l1_x, const double & l1_y)
{
}

Line::Line(const Point & p1, const Point & p2)
{
}

Line::Line(const Point & p1, const double & l1_x, const double & l1_y)
{
}

Line::Line(const Line & l)
{
}

void Line::SetLine(const double & l0_x, const double & l0_y, const double & l1_x, const double & l1_y)
{
}

void Line::SetLine(const Point & p1, const Point & p2)
{
}

void Line::SetLine(const Point & p1, const double & l1_x, const double & l1_y)
{
}

void Line::SetLine(const Line & l)
{
}

void Line::SetP0(const double & x, const double & y)
{
}

void Line::SetP0(const Point & p)
{
}

void Line::SetP1(const double & x, const double & y)
{
}

void Line::SetP1(const Point & p)
{
}

Line Line::GetLine(void) const
{
	return Line();
}

Point Line::GetP0(void) const
{
	return Point();
}

Point Line::GetP1(void) const
{
	return Point();
}

double Line::Distance(void) const
{
	return 0.0;
}

Line::~Line()
{
}
