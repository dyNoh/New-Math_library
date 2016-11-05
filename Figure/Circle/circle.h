#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "..\..\BasicArith\basicArith.h"
#include "..\Point\point.h"

class Circle
{
private:
	Point p;		// 중심점
	double r;		// 반지름

public:
	Circle(double x = 0, double y = 0, double r = 0);	// 생성자
	Circle(const Point& p, const double& r = 0);		// 생성자
	Circle(const Circle& c);							// 생성자
	void setCircle(const double& x, const double& y, const double& r);
	void setCircle(const Point& p, const double& r);
	void setCircle(const Circle& c);
	void setPoint(const Point& p);
	void setPoint(const double& x, const double& y);
	void setR(const double& r);
	Circle getCircle(void) const;
	Point getPoint(void) const;
	double getR(void) const;
	double getArea(void) const;							// 원의 넓이
	double getRound(void) const;						// 원의 둘레
	void showData(void);								// 정보 나타내기
	~Circle();											// 소멸자
};

#endif
