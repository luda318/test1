#include <stdio.h>

int main(void) 
{
	char season;


	printf("��:A �Ǵ� a\n");
	printf("����:S �Ǵ� s\n");
	printf("����:D �Ǵ� d\n");
	printf("�ܿ�:F �Ǵ� f\n");
	printf("�����ϴ� ������ �ش��ϴ� ���ĺ� �Է� : ");
	scaf_s("%c", &season, sizeof(season));

	switch (season)
	{
		case 'A';
		case 'a';

	}







	return 0;
}