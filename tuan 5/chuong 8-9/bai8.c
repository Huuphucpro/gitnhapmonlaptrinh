#include<stdio.h>
void printminmaxdigits(int n){
	int soHang, min, max, soBanDau;
	soBanDau = n;
	soHang = n % 10;
	n /= 10;
	min = max = soHang;
	while(n>0){
		soHang = n % 10;
		n /= 10;
		if(min > soHang){
			min = soHang;
		}
		if(max < soHang){
			max = soHang;
		}
	}		
	printf("so be nhat cua %d la %d\n", soBanDau, min);
	printf("so lon nhat cua %d la %d\n", soBanDau, max);
}
int main (){
	int n;
	do{
		printf("nhap so: ");
		scanf("%d", &n);
		printminmaxdigits(n);
	}while(n < 0);

	return 0;
}
