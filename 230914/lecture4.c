#include <stdio.h>

int main(void) {

	int a;
	scanf_s("%d", &a);

	if(a % 2 == 0) {
		printf("입력한 정수 %d는 짝수입니다.\n", a);
	}
	else 
		printf("입력한 정수 %d는 홀수입니다.", a);






	return 0;
}