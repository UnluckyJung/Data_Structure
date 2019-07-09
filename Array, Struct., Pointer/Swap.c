#include<stdio.h>
void swap(int* A, int* B) {
	int temp;

	temp = *A;
	*A = *B;
	*B = temp;
}


int main() {
	int AA = 1;
	int BB = 2;

	printf("AA = %d BB = %d \n", AA, BB);
	swap(&AA, &BB);
	printf("AA = %d BB = %d \n", AA, BB);

	return 0;
}