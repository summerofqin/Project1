#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	int a = 1;
	int i = 1;
	scanf("%d", &n);
	while (i<=n)
	{
		a = a * i;
		i++;
	}
	printf("%d", a);
	return 0;
}