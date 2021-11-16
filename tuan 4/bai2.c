#include<stdio.h>
int main(){
	int a,b;
	printf("nhap 2 so a va b (a > b va b khac 0):\n");
	scanf("%d%d",&a ,&b);
	if(a < b || b ==0){
	printf("ban nhap sai");
	}else{
		if(a % b == 0){
			printf("%d la uoc cua %d" ,b, a);
		}else{
			printf("%d khong phai la uoc cua %d" ,b, a);
		}
	}
	return 0;
}
