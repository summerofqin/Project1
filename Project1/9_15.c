#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int *y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;

 }
int main()
{
	int *a, *b;
	printf("请输入两个整数a,b:");
	scanf("%d%d", &a, &b);
	swap(&a, &b);
	printf("%d\n%d", a, b);
	return 0;
}