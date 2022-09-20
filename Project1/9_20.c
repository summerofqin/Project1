#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d\n", n % 10);
}
int main()
{
	int num = 0;
	printf("请输入一个整数：");
	scanf("%d", &num);
	Print(num);
	return 0;
}