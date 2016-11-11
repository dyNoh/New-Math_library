#ifndef __POINT_H__
#define __POINT_H__

/*
	점에 관련된 헤더파일
*/

class Point
{
private:
	double x;
	double y;
public:
	Point(double x = 0, double y = 0);	// 생성자
	Point(const Point& p);
	void SetPoint(const double& x, const double& y);
	void SetPoint(const Point& p);
	void SetX(const double& x);
	void SetY(const double& y);
	Point GetPoint(void) const;
	double GetX(void) const;
	double GetY(void) const;
	double Distance(const double& x, const double& y);	// 다른 점과의 거리
	double Distance(const Point& p);	// 다른 점과의 거리
	void ShowData(void) const;			// 정보 나타내기
	~Point();							// 소멸자
};
#endif
