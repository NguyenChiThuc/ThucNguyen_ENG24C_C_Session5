#include<stdio.h>

int main(){
	int firstNumber;
	int secondNumber;
	
	printf("Moi ban nhap 2 so bat ki: ");
	scanf("%d %d",&firstNumber, &secondNumber);
	
	printf("Tong cua 2 so la: %d \n", firstNumber + secondNumber);
	printf("Hieu cua 2 so la: %d \n", firstNumber - secondNumber);
	printf("Tich cua 2 so la: %d \n", firstNumber * secondNumber);
	printf("Thuong cua 2 so la: %d \n", firstNumber / secondNumber);
	
	return 0;
}
