#include<stdio.h>
int main(){
	int soLuong, tongTien;
	printf("nhap vao so luong ao can mua:");
	scanf("%d" ,&soLuong);
	if(soLuong <= 3){
		tongTien  = soLuong * 120000;
		 printf("so tien phai tra cho %d cai ao la %d\n" ,soLuong ,tongTien);
	}else if(soLuong <= 6 && soLuong > 3){
		tongTien = 3 * 120000 + (soLuong - 3) * 90000;
		printf("so tien phai tra cho %d cai ao la %d" ,soLuong ,tongTien);
	}else if(soLuong <= 10 && soLuong > 6){
		tongTien = 3 * 120000 + 3 * 90000 + (soLuong - 6) * 85000;
		printf("so tien phai tra cho %d cai ao la %d" ,soLuong ,tongTien);
	}else if(soLuong > 10){
		tongTien = 3 * 120000 + 3 * 90000 + 4 * 85000 + (soLuong - 10) * 70000;
		printf("so tien phai tra cho %d cai ao la %d" ,soLuong ,tongTien);
	}
	return 0;
}
