#ifndef __LINE_H__
#define __LINE_H__

/*
	선에 관련된 헤더파일
*/

#include "..\Point\point.h"

class Line
{
private:
	Point l[2];
public:
	Line(const double& l0_x = 0, const double& l0_y = 0, const double& l1_x = 0, const double& l1_y = 0);
	Line(const Point& p1, const Point& p2);
	Line(const Point& p1, const double& l1_x, const double& l1_y);
	Line(const Line& l);
	void SetLine(const double& l0_x, const double& l0_y, const double& l1_x, const double& l1_y);
	void SetLine(const Point& p1, const Point& p2);
	void SetLine(const Point& p1, const double& l1_x, const double& l1_y);
	void SetLine(const Line& l);
	void SetP0(const double& x, const double& y);
	void SetP0(const Point& p);
	void SetP1(const double& x, const double& y);
	void SetP1(const Point&p);
	Line GetLine(void) const;
	Point GetP0(void) const;
	Point GetP1(void) const;
	double Distance(void) const; // 길이
	void ShowData(void) const;			// 정보 나타내기
	~Line();	// 소멸자
private:
	int Exception(const Point & p1, const Point & p2);//예외처리
	void SetDefault(void);
};

#endif
