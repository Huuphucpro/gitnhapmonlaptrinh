#include<stdio.h>
//chuyen sang dinh ham tinh giai thua


//Ham giaiThua la ham ko co gia tri tra ve.

void giaiThua(int a)
{
	int i;
	double p1=1;
	for(i = 1; i <=a; i++){
		p1 *= i;
	}
	printf("\nGiai thua cua %d tinh theo ham GIAITHUA la: %g\n",a, p1);
}

//Ham giaiThua1 co gia tri tra ve

double giaiThua1(int b)
{
	int i;
	double p1=1;
	for(i = 1; i <=b; i++){
		p1 *= i;
	}
	return p1;
}

int main(){
	int n, i;
	double p=1;
	printf("Nhap n de tinh n giai thua: ");
	scanf("%d",&n);
	giaiThua(n);
	printf("\nGiai thua tinh theo ham GIAITHUA1 la: %g", giaiThua1(n));
	
/*	
	for(i = 1; i <=n; i++){
		p *= i;
	}
	printf("\nGiai thua cua %d la: %g\n",n, p);
*/
	return 0;
}
