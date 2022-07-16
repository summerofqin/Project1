#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double x, y, a, b;
	scanf("%lf%lf", &x, &y);
	a = sin(x), b = cos(y);
	printf("sin(x)=%.3lf\ncos(y)=%.3lf\n", a, b);
	return 0;

}