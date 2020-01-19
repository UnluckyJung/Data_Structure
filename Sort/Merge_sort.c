#include<stdio.h>

int arr[30001];
int buf[30001];

int n;

void m_sort(int arr[], int len) {
	if (len < 2) return;

	int left, right, k, mid;
	k = left = 0;
	right = mid = (len / 2);

	m_sort(arr, mid);
	m_sort(arr + mid, len - mid);

	while (left < mid && right < len) {
		if (arr[left] < arr[right]) buf[k++] = arr[left++];
		else buf[k++] = arr[right++];
	}

	while (left < mid)	 buf[k++] = arr[left++];
	while (right < len)	 buf[k++] = arr[right++];
	
	for (int i = 0; i < len; ++i) {
		arr[i] = buf[i];
	}
}
int main() {
	freopen("input.txt", "r", stdin);
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}

	//for (int i = 0; i < n; ++i) {
	//	printf("%d ", arr[i]);
	//}

	m_sort(arr, n);
	for (int i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
	return 0;
}