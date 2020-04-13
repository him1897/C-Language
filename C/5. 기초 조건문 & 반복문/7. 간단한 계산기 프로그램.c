#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while(1)
	{
		printf("수식을 입력해주세요! : ");
		scanf("%d %c %d", &x, &o, &y);
		if(o == '+'){
			printf("%d %c %d = %d\n", x, o, y, x + y);
		}else if(o == '-'){
			printf("%d %c %d = %d\n", x, o, y, x - y);
		}else if(o == '*'){
			printf("%d %c %d = %d\n", x, o, y, x * y);
		}else if(o == '/'){
			printf("%d %c %d = %d\n", x, o, y, x / y);
		}else if(o == '%'){
			printf("%d %c %d = %d\n", x, o, y, x % y);
		}else{
			printf("입력이 잘못 되었습니다.");
		}
		getchar(); //버퍼, 즉 엔터값을 먹는다. 
		printf("프로그램을 종료하시겠습니까? (Y/N)");
		scanf("%c", &o);
		if(o == 'n' || o == 'N'){
			continue;
		}else if(o == 'y' || o == 'Y'){
			break;
		}else{
			printf("잘못 입력하였습니다.\n");
		}
		
	}
	return 0;
}
