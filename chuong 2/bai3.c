#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	float nuaChuVi, S, P;
	printf("nhap chieu dai cac canh tam giac: \n");
	scanf("%d%d%d" ,&a,&b,&c);
	nuaChuVi = (float) (a + b +c) / 2;
	P = nuaChuVi * 2;
	S = sqrt(nuaChuVi * (nuaChuVi - a) * (nuaChuVi - b) * (nuaChuVi - c));
	printf("Dien tich hinh tam giac la: %.2f\n" ,S);
	printf("Chu vi hinh tam giac la: %.2f\n" ,P);
	return 0;	
}
