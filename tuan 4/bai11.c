#include<stdio.h>
int main(){
	int kwhs;
	float tien;
	printf("nhap so kwh: ");
	scanf("%d" ,&kwhs);
	if(kwhs <= 100){
		tien = kwhs * 950;
		printf("so tien can tra cho %d la %f" ,kwhs ,tien);
	}else if(kwhs >100 && kwhs <= 150){
		tien = 100 * 950 + (kwhs - 100) * 1250;
		printf("so tien can tra cho %d la %f" ,kwhs ,tien);
	}else if(kwhs >150 && kwhs <= 200){
		tien = 100 * 950 + 50 * 1250 + (kwhs - 150) * 1350;
		printf("so tien can tra cho %d la %f" ,kwhs ,tien);
	}else if(kwhs >200){
		tien = 100 * 950 + 50 * 1250 + 50 * 1350 + (kwhs - 200) * 1550;
		printf("so tien can tra cho %d la %f" ,kwhs ,tien);
	}
		return 0;
}
