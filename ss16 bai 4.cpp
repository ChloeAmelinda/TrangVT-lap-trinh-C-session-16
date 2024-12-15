#include <stdio.h>
void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("phan tu thu %d: %d\n", i, *(arr + i)); 
    }
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap gia tri cho phan tu %d: ", i);
        scanf("%d", &arr[i]); 
    }
    inMang(arr, 5);
    return 0;
}

