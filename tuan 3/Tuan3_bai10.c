#include<stdio.h>
int main (){
	int i, num, tich = 1;
	printf("nhap vao so nguyen:\n");
	scanf("%d" ,&num);
	if(num % 2 == 1){
		for(i=1; i <=num; i+=2){
			tich = tich * i;
		}
		printf("tich cac so le la %d", tich);
	}else{
		for(i=2; i <=num; i+=2){
			tich = tich * i;
		}
		printf("tich cac so chan la %d", tich);
	}
	return 0;
}
