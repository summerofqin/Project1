#include<stdio.h>
int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{    
			printf("%d ", i);
			count++;
		}
		if (i / 10 == 9)
		{
			printf("%d ", i);
			count++;
		}
		
	}
	printf("\n 9�ĸ���count=%d \n", count);
	return 0;
}