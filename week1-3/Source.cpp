#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float price;
	printf("Price : ");
	scanf("%f", &price);

	printf("Vat is %.2f",0.07*price);
}
