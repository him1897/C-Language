#include <stdio.h>

int main(void)
{
	int x = 50;
	float y = 123456789.123456789;
	double z = 123456789.123456789;
	printf("x = %d\n", x);
	printf("y = %.2f\n", y); //%f 는 실수출력(.2는 소숫점 2번째까지 출력하라) 
	printf("z = %.2f\n", z); 
	return 0;
}
