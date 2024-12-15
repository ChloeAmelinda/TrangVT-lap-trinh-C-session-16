#include<stdio.h>
int main(){
	int n; 
	printf("Nhap gia tri bat ky:");
	scanf("%d",&n);
	printf("Gia tri phan tu : %d\n",n);
	int *ptr=&n;
	printf("Gia tri cua ptr: %d",*ptr);
	return 0;
}
