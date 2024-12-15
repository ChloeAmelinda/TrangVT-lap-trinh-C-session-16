#include<stdio.h>
int main(){
	int n=6;
	int *ptr=&n;
	printf("gia tri ban dau la: %d\n",n);
	*ptr= *ptr+10;
	printf("Gia tri nam trong bien y la :%d\n",n);
	return 0;
}
