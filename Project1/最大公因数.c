#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		c = b;
		b = a;
		a = c;
	}
	do
	{
		c = b;
		b = a%b;
		a = c;
	} while (b != 0);
		printf("%d", a);
	return 0;
}