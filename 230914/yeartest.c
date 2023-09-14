#include <stdio.h>
#include <string.h>

int main(void)
{
	int year ;
	scanf_s("%d",&year);

	if (year%4==0 && year%100 !=0){
		printf("yes");
	}
	else if (year % 400 == 0){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;


}