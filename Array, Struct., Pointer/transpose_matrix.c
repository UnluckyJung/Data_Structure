#include<stdio.h>
void printf_arr(int arr[][3]) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void trans(int(*arr)[3]) {
//void trans(int arr[][3]) {	//same
	int temp;
	for (int i = 0; i < 3; ++i) {
		for (int j = i; j < 3; ++j) {
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}
int main() {
	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	printf_arr(arr);
	printf("\n\n");
	trans(arr);
	printf_arr(arr);
	return 0;
}