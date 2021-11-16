#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	float c, S;
	printf("nhap chieu dai 2 canh goc vuong: \n"); scanf("%d%d" ,&a,&b);
	S = (a * b) / 2;
	c = sqrt(a*a + b*b);
	printf("Dien tich hinh tam giac la: %.2f\n" ,S);
	printf("chieu dai canh huyen hinh tam giac la: %.2f" ,c);
	return 0;	
}
