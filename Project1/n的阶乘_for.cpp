#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	int a = 1;
	int i = 1;
	scanf("%d", &n);
	for ( i = 1; i<=n ; i++)
	{
		a = a * i;
	}
	printf("%d!=%d", n, a);
	return 0;
}