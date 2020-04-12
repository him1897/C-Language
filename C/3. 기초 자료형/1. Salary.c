#include <stdio.h>
#define MONTHS 12 
//MONTh 는 변수, 12 는 상수를 지정한 것. 

int main(void)
{
	double monthSalary = 1000.5;
	printf("$ %.2f", monthSalary * MONTHS);
	return 0;	
}
