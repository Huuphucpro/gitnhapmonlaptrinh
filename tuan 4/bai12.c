#include<stdio.h>
int main(){
	int thang, nam;
	printf("nhap vao thang: ");
	scanf("%d" ,&thang);
	printf("nhap vao nam: ");
	scanf("%d" ,&nam);
	if(thang > 12){
		printf("\nban nhap sai\n");
	}
	if(nam % 4 == 0 % nam % 100 != 0 || nam % 400 == 0){
		if(thang == 2){
			printf("\nthang 2 nam %d co 29 ngay\n" ,nam);
		}else if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
			printf("\nthang %d nam %d co 31 ngay\n" ,thang ,nam);
		}else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
			printf("thang %d nam %d co 30 ngay\n" ,thang ,nam);
		}
	}else if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
			printf("\nthang %d nam %d co 31 ngay\n" ,thang ,nam);
	}else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
			printf("\nthang %d nam %d co 30 ngay\n" ,thang ,nam);
	}else if(thang == 2){
			printf("\nthang 2 nam %d co 28 ngay\n" ,nam);
	}
	return 0;
}
