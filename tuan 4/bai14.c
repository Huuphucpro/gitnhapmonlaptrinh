#include<stdio.h>
int main(){
	float diem10, diem4, A,  B,  C,  D, F;
	printf("nhap vao diem cua ban theo thang diem 10: ");
	scanf("%f, &diem10");
	diem4 = (diem10 / 10) * 4;
	if(diem4 == 4){
		A = diem4;		
//	}else if(diem4 < 4 && diem4 >= 3.5){
//		B+ = diem4;		
	}else if(diem4 < 3.5 && diem4 >= 3){
		B = diem4;		
//	}else if(diem4 < 3 && diem4 >= 2.5){
//		C+ = diem4;		
	}else if(diem4 < 2.5 && diem4 >= 2){
		C = diem4;		
//	}else if(diem4 < 2 && diem4 >= 1.5){
//		D+ = diem4;		
	}else if(diem4 < 1.5 && diem4 >= 1){
		D = diem4;		
	}else if(diem4 < 1){
		F = diem4;		
	}
		printf("Diem theo thang diem 4 la %f" ,diem4 );
	return 0;
}
