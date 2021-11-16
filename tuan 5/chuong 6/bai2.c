#include<stdio.h>
int main(){
	int i, n, giaiThua;
	do {
		giaiThua=1;
		printf("nhap so han can tinh giai thua: ");
		scanf("%d" ,&n);
		for(i=1; i<=n; i++){
			giaiThua *= i;
	}
		printf("%d! bang %d\n" ,n ,giaiThua);
	}while(n !=1);
	return 0;
}
