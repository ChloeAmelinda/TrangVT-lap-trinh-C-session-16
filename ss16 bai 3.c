#include <stdio.h>

int main(){
	int tong();
	int arr[100]={1,2};
	int *ptr = arr;
	int x = *ptr;
	printf("%d\n", x);
	int y = *(ptr +1);
	printf("%d\n", y);

	printf("Ket qua : %d.", tong(&x, &y));
	return 0;
}

int tong(int *a, int *b){
	int sum;
	sum = *a + *b;
	return sum;
}
