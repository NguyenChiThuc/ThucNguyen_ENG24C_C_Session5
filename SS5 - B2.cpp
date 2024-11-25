#include<stdio.h>

int main(){
	printf("Moi ban nhap 1 so bat ki 0<x<10: ");
	int Number;
	
	do{
		scanf("%d", &Number);
		if(Number==5){
			printf("Hay qua dung roi!");
			break;
}
		else
		printf("Khong dung roi moi ban nhap lai: \n");
	}
	while(true);
	
	return 0;
}
