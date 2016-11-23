#ifndef __BASIC_ARITH_H__
#define __BASIC_ARITH_H__

/*
	기본적인 연산에 관련된 헤더파일
*/
#define PI 3.1415926535

double Add(double num1, double num2);						// num1 + num2
double Min(double num1, double num2);						// num1 - num2
double Mul(double num1, double num2);						// num1 * num2
double Div(double num1, double num2);						// num1 / num2
double Sqrt(const double& num);								// Square root, 제곱근
double Pow(const double& num, const int& n = 2);			// n제곱
double Cos(const double& x);                                // 코사인(각도), 테일러급수
double Sin(const double& x);                                // 사인(각도), 테일러급수
double Tan(const double& x);								// 탄젠트(각도), 테일러급수
double Csc(const double& x);								// 코시컨트(각도), 테일러급수
double Sec(const double& x);								// 시컨트(각도), 테일러급수
double Cot(const double& x);								// 코탄젠트(각도), 테일러급수
double PowE(const double& n = 2);                           // e의 n제곱
double Ln(const double& x);									// lnx
double Log(const double& x, const double& a = 10);			// logaX


#endif
