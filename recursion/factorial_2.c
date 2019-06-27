#include<stdio.h>

//factorial
int factorial(int n) {
	int num = 1;
	for (int i = 1; i <= n; ++i) {
		num *= i;
	}
	return num;
}

int main() {
	printf("%d\n", factorial(5));	// 5 x 4 x 3 x 2 x 1 = 120
	return 0;
}