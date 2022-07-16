#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double x;
	scanf("%lf", &x);
	printf("%.1lf\n%.2lf\n%.3lf", x, x, x);
	return 0;

}

