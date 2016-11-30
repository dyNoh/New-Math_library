#ifndef __TETRAGON_H__
#define __TETRAGON_H__

#include "..\Point\point.h"

class Tetragon
{
private :
	Point t[4];
public :
	Tetragon(const double& t0_x = 0, const double& t0_y = 0, const double& t1_x = 1, const double& t1_y = 0, const double& t2_x = 1, const double& t2_y = 1, const double& t3_x = 0, const double& t3_y = 1);
	Tetragon(const Point& p1, const Point& p2, const Point& p3, const Point& p4);
	Tetragon(const Point& p1, const Point& p2, const Point& p3, const double& t3_x, const double& t3_y);
	Tetragon(const Point& p1,const Point& p2, const double& t2_x, const double& t2_y, const double& t3_x, const double& t3_y);
	Tetragon(const Point& p1, const double& t1_x, const double&t1_y, const double& t2_x, const double& t2_y, const double& t3_x, const double& t3_y);
	Tetragon(const Tetragon& t);
	void SetTetragon(const double& t0_x, const double& t0_y, const double& t1_x, const double& t1_y, const double& t2_x, const double& t2_y, const double& t3_x, const double& t3_y);
	void SetTetragon(const Point& p1, const Point& p2, const Point& p3, const Point& p4);
	void SetTetragon(const Point& p1, const Point& p2, const Point& p3, const double& t3_x, const double& t3_y);
	void SetTetragon(const Point& p1, const Point& p2, const double& t2_x, const double& t2_y, const double& t3_x, const double& t3_y);
	void SetTetragon(const Point& p1, const double& t1_x, const double&t1_y, const double& t2_x, const double& t2_y, const double& t3_x, const double& t3_y);
	void SetTetragon(const Tetragon& t);
	void SetP0(const double& x, const double& y);
	void SetP0(const Point& p);
	void SetP1(const double& x, const double& y);
	void SetP1(const Point& p);
	void SetP2(const double& x, const double& y);
	void SetP2(const Point& p);
	void SetP3(const double& x, const double& y);
	void SetP3(const Point& p);
	Tetragon GetTetragon(void) const;
	Point GetP0(void) const;
	Point GetP1(void) const;
	Point GetP2(void) const;
	Point GetP3(void) const;
	double GetArea(void) const;		// 넓이
	double GetRound(void) const;	// 둘레
	void ShowData(void) const;	// 정보 나타내기
	
private :
	int Exception(const Point& p1, const Point& p2, const Point& p3, const Point& p4); // 사각형 성립 조건 확인
	void SetDefault(void);
//	~Tetragon();	// 소멸자

};

#endif
