#include<stdio.h>
#include<malloc.h>

typedef struct node {
	struct node* next;
	int n;
}NODE;

NODE HEAD;

void print_all_node() {
	NODE* head = &HEAD;
	int cnt = 0;
	if(head->next == NULL) {
		printf("nothing in list\n\n");
		return;
	}
	while (head->next != NULL) {
		printf("[%d] node adderss is 0x%.8X , node value is %d , next node address is 0x%.8X\n", cnt , head->next, head->next->n, head->next->next);
		head = head->next;
		cnt++;
	}
	printf("\n");
}

void insert_node(int n) {
	NODE* new_node = calloc(1, sizeof(NODE));
	if (new_node == NULL) {
		printf("%d insert fail\n", n); return;
		return;
	}
	new_node->n = n;

	NODE* head = &HEAD;
	while (head->next != NULL) {
		head = head->next;
	}

	head->next = new_node;
	printf("%d insert sucess\n", n); return;
}

void delete_node(int n) {
	NODE* head = &HEAD;
	while (head->next != NULL) {
		if (head->next->n == n)break;
		head = head->next;
	}
	if (head->next == NULL) {
		printf("value %d Delete fail\n", n); return;
	}

	head->next = head->next->next;
	free(head->next);
	printf("value %d Delete sucess\n", n); return;
}

int main() {
	
	insert_node(1);
	insert_node(2);

	print_all_node();

	delete_node(2);
	print_all_node();

	delete_node(3);
	delete_node(1);
	print_all_node();


	insert_node(10);	
	insert_node(20);

	print_all_node();
	return 0;
}