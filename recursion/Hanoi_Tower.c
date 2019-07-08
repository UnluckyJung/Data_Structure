#include<bits/stdc++.h>
using namespace std;
int count_num = 0;

void hanoi_tower(int n, char A, char B, char C) {
	if (n == 1) {
		printf("원판 1를 %c에서 %c로 이동\n",A,C);
		count_num++;
	}
	else
	{
		hanoi_tower(n - 1, A, C, B);	//n - 1개를 A에서 B로 이동

		printf("원판 %d를 %c에서 %c로 이동\n", n, A, C);	//A에 있는 가장 큰 원판 하나를 C로 이동
		count_num++;

		hanoi_tower(n - 1, B, A, C);	//n -1 개 (B에 올라가있는 모든 원판)를 C로 이동.
	}
}


int main() {
	hanoi_tower(3, 'A', 'B', 'C');
	printf("총 %d회 이동\n", count_num);

	return 0;
}