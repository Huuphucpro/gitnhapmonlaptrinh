#include<stdio.h>

int main(){
	int i, n, s = 0, sc = 0, sl = 0;
	printf("nhap n\n");
	scanf("%d" ,&n);
	for (i=1; i <= n; i++){
		if(i % 2 == 0){
			sc =  sc + i;
		}else{
			sl =  sl + i;
		}
		s = s+ i;
		printf("vong lap thu %d \t tong chan: %d \t tong le: %d \t tong: %d\n\n" , i, sc, sl, s);
	}
	printf("tong tu 1 den %d la: %d\n" ,n ,s);
	printf("tong chan tu 1 den %d la: %d\n" ,n ,sc);
	printf("tong le tu 1 den %d la: %d\n" ,n ,sl);
	return 0;
}
