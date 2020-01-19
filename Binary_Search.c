#include<stdio.h>

int arr[] = { 1,2,3,4,5 };  // sorted array

Binary_Search(int s, int e, int num) {

    int mid;
    while (s <= e) {
        mid = (s + e) / 2;
        if (arr[mid] == num) return mid;
        if (arr[mid] > num)  e = mid - 1;
        else s = mid + 1;
    }
    return -1;
}
int main() {
    int n = sizeof(arr) / sizeof(int);
    printf("Binary Search (4) index = %d\n", Binary_Search(0, n-1, 4));
    printf("Binary Search (7) index = %d\n", Binary_Search(0, n-1, 7));

    return 0;
}