#include <stdio.h>

int main(void) {
	int grade;
	scanf_s("%d", &grade);
	
	if (grade > 100 || grade < 0) 
		printf("����\n");
	

	else if (grade>= 90) 
		printf("A\n");
	
	else if (grade>= 80) 
		printf("B\n");
	
	else if (grade>= 70) 
		printf("C\n");
	
	else if (grade>= 60) 
		printf("D\n");
	
	else printf("F\n");






	return 0;
}
