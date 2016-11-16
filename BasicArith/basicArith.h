#ifndef __BASIC_ARITH_H__
#define __BASIC_ARITH_H__

/*
    기본적인 연산에 관련된 헤더파일
*/
#define PI 3.1415926535

#define twoopi   0.636619772367581
#define p0   0.135788409787738e8
#define p1  -0.494290810090284e7
#define p2   0.440103053537527e6
#define p3  -0.138472724998245e5
#define p4   0.145968840666577e3
#define q0   0.864455865292253e7
#define q1   0.408179225234330e6
#define q2   0.946309610153821e4
#define q3   0.132653490878614e3

double Add(double num1, double num2);						// num1 + num2
double Min(double num1, double num2);						// num1 - num2
double Mul(double num1, double num2);						// num1 * num2
double Div(double num1, double num2);						// num1 / num2
double Sqrt(const double& num);								// Square root, 제곱근
double Pow(const double& num, const int& n = 2);			// n제곱
static double Sinus(double arg, int quad);                  // 사인, 코사인 계산
double Cos(double x);                                       // 코사인(각도)
double Sin(double x);                                       // 사인(각도), 테일러급수
double Tan(double x);										// 탄젠트(각도)
double PowE(const double& n = 2);                           // e의 n제곱


#endif
