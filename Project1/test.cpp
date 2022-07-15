#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	int b = a;
	double c = a - b;
	if (a>0)
		printf("+\n%d\n%.3lf\n", b, a);
	if (a < 0)
		printf("-\n%d\n%.3lf\n", b, a);
	return 0;

}