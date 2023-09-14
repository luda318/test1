#include <stdio.h>

int main(void) 
{
	char season;


	printf("봄:A 또는 a\n");
	printf("여름:S 또는 s\n");
	printf("가을:D 또는 d\n");
	printf("겨울:F 또는 f\n");
	printf("좋아하는 계절에 해당하는 알파벳 입력 : ");
	scaf_s("%c", &season, sizeof(season));

	switch (season)
	{
		case 'A';
		case 'a';

	}







	return 0;
}