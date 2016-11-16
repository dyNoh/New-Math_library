#include "basicArith.h"
#include <iostream>

double Add(double num1, double num2)
{
	return num1+num2;
}

double Min(double num1, double num2)
{
	return num1-num2;
}

double Mul(double num1, double num2)
{
	return num1*num2;
}

double Div(double num1, double num2)
{
	return num1/num2;
}

double Sqrt(const double& num)
{
	// 이 부분에 num이 0 이하일 경우 예외처리
	/*if (num <= 0)
	{
		cout << "NaN" << endl;
		return 0.0;
	}*/

	double Xn = 1;		// Xn
	double XnP1 = 1;	// Xn+1

	while (1)
	{
		XnP1 = 0.5 * (XnP1 + (num / XnP1));

		if (Xn - XnP1 < 0.00001 && Xn - XnP1 > -0.00001)  // 정확도 |0.00001|
		{
			break;
		}

		Xn = XnP1;
	}

	return XnP1;
}

double Pow(const double & num, const int & n)
{
	double val = 1;

	if (n < 0)
	{
		for (int m = 0; m < -n; m++)
		{
			val *= (1 / num);
		}
		return val;
	}

	for (int m = 0; m < n; m++)
	{
		val *= num;
	}

	return val;
}

static double Sinus(double arg, int quad)
{
	double e, f;
	int k;
	double ysq;
	double x, y;
	double temp1, temp2;
	x = arg;
	if (x < 0)
	{
		x = -x;
		quad = quad + 2;
	}
	x = x * twoopi;
	if (x > 32764)
	{
		y = modf(x, &e);
		e = e + quad;
		modf(0.25*e, &f);
		quad = e - 4 * f;
	}
	else
	{
		k = x;
		y = x - k;
		quad = (quad + k) & 03;
	}
	if (quad & 01)
	{
		y = 1 - y;
	}
	if (quad > 1)
	{
		y = -y;
	}
	ysq = y*y;
	temp1 = ((((p4*ysq + p3)*ysq + p2)*ysq + p1)*ysq + p0)*y;
	temp2 = ((((ysq + q3)*ysq + q2)*ysq + q1)*ysq + q0);
	return(temp1 / temp2);
}
double Cos(double x)
{
	if (x < 0.0) x = -x;
	return (sinus(x, 1));
}
double Sin(double x)
{
	return (sinus(x, 0));
}
