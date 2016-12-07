#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include "../Point/point.h"

/*
	삼각형에 관련된 헤더파일
*/

class Triangle
{
private:
	Point t[3];
public:
	Triangle(const double& t0_x = 0, const double& t0_y = 0, const double& t1_x = 1, const double& t1_y = 0, const double& t2_x = 0, const double& t2_y = 1);
	Triangle(const Point& p1, const Point& p2, const Point& p3);
	Triangle(const Point& p1, const Point& p2, const double& t2_x, const double& t2_y);
	Triangle(const Point& p1, const double& t1_x, const double& t1_y, const double& t2_x, const double& t2_y);
	Triangle(const Triangle& t);
	void SetTriangle(const double& t0_x, const double& t0_y, const double& t1_x, const double& t1_y, const double& t2_x, const double& t2_y);
	void SetTriangle(const Point& p1, const Point& p2, const Point& p3);
	void SetTriangle(const Point& p1, const Point& p2, const double& t2_x, const double& t2_y);
	void SetTriangle(const Point& p1, const double& t1_x, const double& t1_y, const double& t2_x, const double& t2_y);
	void SetTriangle(const Triangle& t);
	void SetP0(const double& x, const double& y);
	void SetP0(const Point& p);
	void SetP1(const double& x, const double& y);
	void SetP1(const Point& p);
	void SetP2(const double& x, const double& y);
	void SetP2(const Point& p);
	Triangle GetTriangle(void) const;
	Point GetP0(void) const;
	Point GetP1(void) const;
	Point GetP2(void) const;
	double GetArea(void) const;		// 넓이
	double GetRound(void) const;	// 둘레
	void ShowData(void) const;	// 정보 나타내기
	~Triangle();	// 소멸자
private :
	int Exception(const Point& p1, const Point& p2, const Point& p3); // 삼각형 성립 조건 확인
	void SetDefault(void);
};

#endif
