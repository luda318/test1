#include <stdio.h>

int main(void)
{
	int count, hap = 0;
	
	for (count = 1; count <= 10; count++) {
		if (count % 2 == 1)
			hap += count;
		printf("%d까지의 홀수의 합은 %d이다.", count, hap);
	}

	printf("hap=%d\n", hap);


	return 0;
}