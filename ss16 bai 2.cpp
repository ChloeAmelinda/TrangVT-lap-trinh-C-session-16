#include<stdio.h>
void swap(int *input1, int *input2){
	int temp =*input1;
	*input1=*input2;
	*input2=temp;
} 
int main(){
	int a,b;
	printf("Nhap so a:");
	scanf("%d",&a);
	printf("Nhap so b:");
	scanf("%d",&b);
	printf("so a truoc khi doi cho la:%d\n",a);
	printf("so b truoc khi doi cho la:%d\n",b);
	swap(&a,&b);
	printf("so a sau khi doi cho la:%d\n",a);
	printf("so b sau khi doi cho la:%d\n",b);
	return 0;
}
