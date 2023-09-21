#include <stdio.h>

int main(void) {

	int i,j;
	scanf_s("%d", &i);
	for (j = 2; j <i; j++) {
		if (i % j == 0) {
			printf("0");
			return 0;
		}

		
	
	}
	printf("1");

	return 0;
}