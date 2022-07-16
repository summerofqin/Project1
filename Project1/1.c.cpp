#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("please enter two number:");
	scanf("%d%d", &a, &b);
	c = a + b;
	printf("their sum is:%d", c);
	return 0;
}