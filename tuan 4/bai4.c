#include<stdio.h>
int main(){
	int x, y;
	printf("nhap toa do x, y:\n");
	scanf("%d%d" ,&x ,&y);
	if(x > 0 && y> 0){
		printf("toa do %d, %d thuoc goc phan tu thu nhat\n" ,x ,y);
	}else if(x < 0 && y > 0){
		printf("toa do %d, %d thuoc goc phan tu thu hai\n" ,x ,y);
	}else if(x < 0 && y < 0){
		printf("toa do %d, %d thuoc goc phan tu thu ba\n" ,x ,y);
	}else if(x > 0 && y < 0){
		printf("toa do %d, %d thuoc goc phan tu thu tu\n" ,x ,y);
	}
	return 0;
}

