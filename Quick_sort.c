#include<stdio.h>

int arr[] = {4,1,32,4,5,6};

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int s, int e){
    int pivot = arr[e];
    int target = s-1;
    for(int left = s; left<e; ++left){
        if(arr[left] <= pivot)  swap(&arr[++target], &arr[left]);
    }
    swap(&arr[++target], &arr[e]);
    return target;
}

void q_sort(int s, int e){
    if(s < e){
    int q = partition(s,e);
    q_sort(s, q-1);
    q_sort(q+1, e);
    }
}
int main(){
    for(int i = 0 ; i<6; ++i)   printf("%d ", arr[i]);
    printf("\n");
    q_sort(0, 5);
    for(int i = 0 ; i<6; ++i)   printf("%d ", arr[i]);
    return 0;
}