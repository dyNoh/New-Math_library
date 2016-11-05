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
	void setPoint(const double& x, const double& y);
	void setPoint(const Point& p);
	void setX(const double& x);
	void setY(const double& y);
	Point getPoint(void) const;
	double getX(void) const;
	double getY(void) const;
	double distance(const Point& p);	// 다른 점과의 거리
	void showData(void) const;			// 정보 나타내기
	~Point();							// 소멸자
};
#endif