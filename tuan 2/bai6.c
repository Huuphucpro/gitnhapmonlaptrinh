#include<stdio.h>
#include<math.h>
int main(){
	float x, ketqua;
	printf("nhap so nguyen X:\n");
	scanf("%f" ,&x);
	ketqua = x*x / (1 + (x*x / (1 + x*x / (1 + x*x))));
	printf("%.4f" ,ketqua);
	return 0;
}
