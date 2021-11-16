#include<stdio.h>
int main(){
	int sl;
	float kq;
	printf("nhap so luong dia: \n");
	scanf("%d" ,&sl);
	if(sl > 10){
		kq = sl * 5000 * 0.9;
	}else{
		kq = sl * 5000;
	}
	printf("tong tien can tra cho %d dia DVD la %.2f vnd\n\n" ,sl ,kq);
	return 0;
}
