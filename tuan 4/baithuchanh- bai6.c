#include<stdio.h>
int main(){
	int input, w, l, r, b, h;
	float dienTich;
	printf("nhap vao 1 neu tinh dien tich hinh tron \n");	
	printf("nhap vao 2 neu tinh dien tich hinh chu nhat \n");	
	printf("nhap vao 3 neu tinh dien tich hinh tam giac \n");	
	scanf("%d" ,&input);
	switch(input){
		case 1:
			printf("nhap ban kinh hinh tron: ");
			scanf("%d" ,&r);
			dienTich = 3.14 * r * r;
			break;
		case 2:
			printf("nhap chieu dai hinh chu nhat: ");
			scanf("%d" ,&l);
			printf("nhap chieu rong hinh chu nhat: ");
			scanf("%d" ,&w);
			dienTich = w * l;
			break;
		case 3:
			printf("nhap do dai canh day cua tam giac: ");
			scanf("%d" ,b);
			printf("nhap do dai chieu cao cua tam giac: ");
			scanf("%d" ,h);
			dienTich = 1/2 * b * h;
			break;
	}
	printf("dien tich la: %.2f" ,dienTich);
	return 0;
}
