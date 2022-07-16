#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	long b;
	b = a * 1000 / 7 / 0.35;
		printf("%d", b);
	return 0;
}