#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double x, y;
	scanf("%lf", &x);
	if (x<1)
	{
		y = x;
	}
	else if (x >= 1 && x < 10)
	{
		y = 2*x - 1;
	}
	else if (x >= 10)
	{
		y = 3*x - 11;
	}
	printf("%lf", y);
	return 0;
} 