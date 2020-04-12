#include <stdio.h>

int main(void)
{
	int x = -50, y = 30;
	int absoluteX = (x > 0) ? x : -x; //조건연산자 
	int max = (x > y) ? x : y; //삼항연산자 개념 
	int min = (x < y) ? x : y;
	printf("x의 절댓삾은 %d 입니다. \n", absoluteX);
	printf("x와 y중에서 최댓값은 %d 입니다. \n", max);
	printf("x와 y중에서 최솟값은 %d 입니다. \n", min);
	return 0;
}
