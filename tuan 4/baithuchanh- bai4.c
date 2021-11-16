#include<stdio.h>
int main (){
	int thang;
	printf("nhap vao thang: ");
	scanf("%d" ,&thang);
	if(thang >=1 && thang <= 12){
		if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
			printf("thang %d co 31 ngay" ,thang);
		}else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
			printf("thang %d co 30 ngay" ,thang);
		}else{
			printf("thang 2 co 28 hoac 29 ngay");
		}
	}else{
		printf("nhap sai, vui long nhap lai. Thang tu 1 den 12");
	}
	return 0;
}
