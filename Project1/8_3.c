#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void is_prime(int a)
{
	int i = 2;
	while (i <= sqrt(a))
	{
		if (a % i == 0)
		{
			break;
		}
		i++;
	}
	if (i > sqrt(a))
	{
		printf(" %d ", a);
	}
}
int main()
{
	int a = 0;
	for (a = 100; a <= 200; a++)
	{
		is_prime(a);
	}
	return 0;
}