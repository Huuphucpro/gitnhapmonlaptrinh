#include<stdio.h>
int main (){
	float weight1, quantity1, weight2, quantity2, Average;
	printf("Weight Item 1: ");
	scanf("%f" ,&weight1);
	printf("Quantity 1: ");
	scanf("%f" ,&quantity1);
	printf("Weight Item 2: ");
	scanf("%f" ,&weight2);
	printf("Quantity 2: ");
	scanf("%f" ,&quantity2);
	Average = (weight1 * quantity1 + weight2 * quantity2) / (quantity1 + quantity2);
	printf ("Average value: %.6f" ,Average);
	return 0;
}
