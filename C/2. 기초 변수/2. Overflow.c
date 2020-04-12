#include <stdio.h>
#include <limits.h> //max 함수를 사용하기 위해 라이브러리 헤더파일 필요 

int main(void)
{
	int x = INT_MAX;
	printf("int형의 최댓값 x는 %d 입니다.\n", x);
	printf("x + 1은 %d 입니다.\n", x+1);
	return 0;
}
