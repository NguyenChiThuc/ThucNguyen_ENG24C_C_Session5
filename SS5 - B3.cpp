#include<stdio.h>

int main(){
	int Number;
	scanf("%d", & Number);
	int sum=0;
	for(int i=1; i<=Number; i++)
	sum+=i;
	printf("Gia tri tong la: %d ", sum);
	return 0;
	
}
