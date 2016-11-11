#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include "../Point/point.h"

class Triangle
{
private:
	Point t[3];
public:
	Triangle(const double& t0_x = 0, const double& t0_y = 0, const double& t1_x = 1, const double& t1_y = 0, const double& t2_x = 0, const double& t2_y = 1);
	Triangle(const Point& p1, const Point& p2, const Point& p3);
	Triangle(const Point& p1, const Point& p2, const double& t2_x, const double& t2_y);
	Triangle(const Point& p1, const double& t1_x, const double& t1_y, const double& t2_x, const double& t2_y);
	void SetTriangle(const double& t0_x, const double& t0_y, const double& t1_x, const double& t1_y, const double& t2_x, const double& t2_y);
	void SetTriangle(const Point& p1, const Point& p2, const Point& p3);
	void SetTriangle(const Point& p1, const Point& p2, const double& t2_x, const double& t2_y);
	void SetTriangle(const Point& p1, const double& t1_x, const double& t1_y, const double& t2_x, const double& t2_y);
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
	double GetArea(void) const;		// ����
	double GetRound(void) const;	// �ѷ�
	double GetCenterOfGravity(void) const;	// �����߽�
	double GetOrthcenter(void) const;	// ����
	double GetExcenter(void) const;	// ���
	double GetIntercenter(void) const;	// ����
	double GetCircumcenter(void) const;	// �ܽ�
	void ShowData(void) const;	// ���� ��Ÿ����
	// �ﰢ�� ���� ���ϱ� �� �߰�
	~Triangle();	// �Ҹ���
};

#endif
