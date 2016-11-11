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
	void SetCircle(const double& x, const double& y, const double& r);
	void SetCircle(const Point& p, const double& r);
	void SetCircle(const Circle& c);
	void SetCenter(const Point& p);
	void SetCenter(const double& x, const double& y);
	void SetR(const double& r);
	Circle GetCircle(void) const;
	Point GetPoint(void) const;
	double GetR(void) const;
	double GetArea(void) const;							// 원의 넓이
	double GetRound(void) const;						// 원의 둘레
	void ShowData(void);								// 정보 나타내기
	~Circle();											// 소멸자
};

#endif
