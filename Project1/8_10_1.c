#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void mul(int n)
{
	for (int x = 1; x <= n; x++)
	{
		for (int y = 1; y <= n; y++)
		{
			printf("%d*%d=%-4d\t", x, y, x * y);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("请输入乘法口诀表列数：");
	scanf("%d", &n);
	mul(n);
	return 0;
}