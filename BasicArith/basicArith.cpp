#include "basicArith.h"
#include <iostream>
using std::cout;
using std::endl;

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
	// num이 0 이하일 경우 예외처리
	if (num <= 0)
	{
		return 0.0;
	}

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

double Cos(const double & x)
{
	return Sin(x + 90);
}

double Sin(const double & x)
{
	double val = x;
	if (x < -180 || x > 180)
	{
		int temp = (int)(x / 180);
		if (temp > 0)
		{
			if (!(temp % 2))
				val = x - (180 * temp);
			else
				val = x - (180 * (temp + 1));
		}
		else if (temp < 0)
		{
			if (!(temp % 2))
				val = x + (180 * -temp);
			else
				val = x + (180 * (-temp + 1));
		}
	}
	double rad = val * PI / 180;
	double sum = rad;
	double result = rad;
	double fact = 1.0f;
	double powX = -Pow(rad);
	int i = 1;

	while (1)
	{
		fact *= ((2 * i) * (2 * i + 1));
		result *= powX;
		sum += (result / fact);
		if ((result / fact) < 0.00001 && (result / fact) > -0.00001) // 정확도 |0.00001|
		{
			if (sum < 0.00001 && sum > -0.00001) // |0.00001| 미만의 크기의 숫자는 0 처리 또한 Tan 함수에서 역수일 때 무한대 처리
				return 0;
			return sum;
		}
		i++;
	}
}

double Tan(const double & x)
{
	return (Sin(x) / Sin(x + 90));
}

double Csc(const double & x)
{
	return (1 / Sin(x));
}

double Sec(const double & x)
{
	return (1 / Sin(x + 90));
}

double Cot(const double & x)
{
	return (Sin(x + 90) / Sin(x));
}

double PowE(const double & n) //e^n
{
	double val = 1;
	double temp = 1;
	int i = 1;

	while (1)
	{
		temp = (temp*n) / i;
		val += temp;
		if (temp < 0.00001 && temp > -0.00001) // 정확도 |0.00001|
			break;
		i++;
	}

	if (val < 0.00005 && val > -0.00005) // 이 숫자보다 작을경우 0으로 처리
		return 0;

	return val;
}

double Ln(const double & x)
{
	if (x <= 0) //예외처리
	{
		return 0;
	}

	double result = 1;
	double y = (x - 1) / (x + 1);
	double count = 3;
	for (int i = 2; i <= 1000; i += 2)
	{
		result += (Pow(y, i) / count);
		count += 2;
	}
	return 2 * y * result;
}

double Log(const double& x, const double& a)
{
	if (a <= 0 || a == 1 || x <= 0) //예외처리
	{
		return 0;
	}
	else
	{
		return Ln(x) / Ln(a);
	}
}
