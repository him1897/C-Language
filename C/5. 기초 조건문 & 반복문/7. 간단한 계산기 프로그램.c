#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while(1)
	{
		printf("수식을 입력하세요 : ");
		scanf("%o %c %d", &x, &o, &y);
		if(o == '+')
		{
			printf("%d %c %d = %d\n", x, o, y, x + y);
		}
		else if(o == '-')
		{
			printf("%d %c %d = %d\n", x, o, y, x - y);
		}
		else if(o == '*')
		{
			printf("%d %c %d = %d\n", x, o, y, x * y);
		}
		else if(o == '/')
		{
			printf("%d %c %d = %d\n", x, o, y, x / y);
		}
		else if(o == '%')
		{
			printf("%d %c %d = %d\n", x, o, y, x % y);
		}
		else
		{
			printf("입력이 잘못 되었습니다.\n");
			//무한루프에 빠짐. 
		}
		//버퍼를 한번 먹어줌. (엔터값을 먹어줌)
		getchar();
		printf("프로그램을 종료하시겠습니까? (y/n)");
		scanf("%c", &o);
		if(o == 'n' || o == 'N')
		{
			continue;
			//continue 함수로 다시 반복문 맨 위로 올라가서 실행하라. 
		}
		else if(o == 'y' || o == 'Y')
		{
			break;
		}
		else
		{
			printf("입력이 잘못되었습니다.\n");
		}
	}
	return 0;
}
