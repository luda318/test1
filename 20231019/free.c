#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num_students;
	scanf_s("�л��� : %d", &num_students);

	int* scores;
	scores = (int*)malloc(sizeof(int) * num_students);
	
	for (int i = 0; i < num_students; i++) {
		printf("�л� # %d-%d���� �Է�:", num_students, i+1);
		scanf_s("%d",&scores[i]);
	}

	int sum = 0;
	for(int i=0;i<num_students;i++){
	sum += scores[i];
	}
printf("%d\n", sum);

}