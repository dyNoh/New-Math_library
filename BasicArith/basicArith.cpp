#include "basicArith.h"

double Add(double num1, double num2)
{
	return 0.0;
}

double Min(double num1, double num2)
{
	return 0.0;
}

double Mul(double num1, double num2)
{
	return 0.0;
}

double Div(double num1, double num2)
{
	return 0.0;
}

double Sqrt(const double& num)
{
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
