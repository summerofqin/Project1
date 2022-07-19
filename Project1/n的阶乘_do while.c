#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n,a=1,i=1;
	scanf("%d", &n);
	do
	{
		a = a * i; 
		i++;
	} while (i <= n);
		printf("%d!=%d",n,a );
	return 0;
}