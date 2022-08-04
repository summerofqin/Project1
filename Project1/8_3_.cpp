#include<stdio.h>
int main()
{
	double a = 1;
	double b = 0;
	double c = 0;
	for (b = 1; b <= 100; b++)
	{
		c = a / b + c;
		a = -a;
	}
	printf("%lf", c);
	return 0;
}