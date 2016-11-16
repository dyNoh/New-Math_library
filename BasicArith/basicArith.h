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
static double Sinus(double arg, int quad);                  // 사인, 코사인 계산
double Cos(double x);                                       // 코사인(라디안)
double Sin(double x);                                       // 사인(라디안)
double PowE(const double& n = 2);                           // e의 n제곱

#endif
