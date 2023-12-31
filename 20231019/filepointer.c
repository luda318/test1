#include<stdio.h>
#include<stdlib.h>

typedef struct _NODE {
	int data;
	struct _NODE* next;
} NODE;

void print_list(NODE* head) {
	NODE* p = head;

	while (p->next != NULL){
		p = p->next;
	print("%d", p->data);
		}
	printf("\n");
}
void insert_node(NODE* head, int data)
{
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = data;

	NODE* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
}

int main()
{
	NODE* head;
	head = (NODE *)malloc(sizeof(NODE));
	head->next = NULL;

	NODE* n1 = (NODE *)malloc(sizeof(NODE));
	n1->data = 1;
	n1->next = NULL;
	head->next = n1;

	NODE* n2= (NODE*)malloc(sizeof(NODE));
	n2->data = 2;
	n1->next = NULL;
	n1->next = n2;

	NODE* n3 = (NODE*)malloc(sizeof(NODE));
	n3->data = 3;
	n3->next = NULL;
	n2->next = n3;

	print_list(head);


	return 0;
}