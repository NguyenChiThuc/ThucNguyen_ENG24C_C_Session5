#include<stdio.h>

int main(){
	
	int Number;
	printf("Moi ban nap so nguyen");
	scanf("%d", &Number);
	int i=1;
	for(i=1;i<Number;i++)
	printf("%d x %d = %d \n", Number,i, Number*i);
	
	return 0;
}
