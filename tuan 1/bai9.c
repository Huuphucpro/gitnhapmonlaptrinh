#include<stdio.h>
int main (){
	float height, weight, BMI;
	printf("nhap chieu cao cua ban (m): ");
	scanf("%f" ,&height);
	printf("nhap can nang cua ban (kg): ");
	scanf("%f" ,&weight);
	BMI = weight / ( height * height);
	printf ("BMI = %f" ,BMI);
	return 0;
}
