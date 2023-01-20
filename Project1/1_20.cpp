#include<stdio.h>
#include<math.h>
//法2：
//这两个数中的总有一个数是小于等于两个数相乘的积的开根号
//例如：36=4*9，4<开根号36=6
int main() {
	int count = 0;
	int i = 0;

	for (i = 100; i <= 200; i++) {
		int flag = 1;
		int j = 0;
		for (j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = 0;//不是素数
				break;
			}
		}
		if (flag == 1) {
			count++;
			printf("\n%d\n", i);
		}
	}
	printf("count:%d", count);

	return 0;
}
