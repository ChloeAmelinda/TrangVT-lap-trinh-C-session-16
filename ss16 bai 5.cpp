#include <stdio.h>

void sua(int *arr, int moi, int position); 
int main(){
	int moi,position;
	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
	printf("Mang truoc khi cap nhap : ");
	for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
	
	printf("nhap so moi:");
	scanf("%d",&moi);
	printf("Nhap vi tri muon sua:");
	
	scanf("%d",&position);
	sua(arr, moi,position); 
	printf("\nMang sau khi sua la : ");
	for(int i = 0; i< sizeof(arr)/sizeof(int); i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}

void sua(int *arr, int moi, int position){
	arr[position] = moi; 
}
