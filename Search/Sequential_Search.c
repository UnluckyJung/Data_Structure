#include<stdio.h>
#include<stdlib.h>

void search(int arr[], int key) {
	
	for (int i = 0; i < 10; ++i) {
		if (arr[i] == key) {
			printf("Find %d !\n", key);
			return;
		}
	}
	printf("I can't Find %d", key);
	return;
}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	search(arr, 3);
	search(arr, 11);

	return 0;
}