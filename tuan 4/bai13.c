#include<stdio.h>
int main(){
	float DTB;
	printf("nhap diem trung binh cua ban: ");
	scanf("&f" ,&DTB);
	if(DTB >= 9){
		printf("Xuat sac\n");
	}else if(DTB >= 8 && DTB < 9){
		printf("Gioi\n");
	}else if(DTB >= 7 && DTB < 8){
		printf("Kha\n");
	}else if(DTB >= 6 && DTB < 7){
		printf("Trung binh kha\n");
	}else if(DTB >= 5 && DTB < 6){
		printf("Trung binh\n");
	}else if(DTB < 5){
		printf("Yeu\n");
	}else{
		printf("ban nhap sai");
	}
	return 0;
}
