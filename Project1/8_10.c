#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*****************************\n");
	printf("*******  1. play     ********\n");
	printf("*******  0. exit     ********\n");
	printf("*****************************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
		while (1)
		{
			scanf("%d", &guess);
			if (guess > ret)
			{
				printf("�´���\n");
			}
			else if (guess < ret)
			{
				printf("��С��\n");
			}
			else
			{
				printf("�¶���\n");
				break;
			}
	     }
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}