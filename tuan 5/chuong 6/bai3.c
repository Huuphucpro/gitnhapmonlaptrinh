#include<stdio.h>
int main(){
	int i, num, tich;
	printf("nhap so nguyen: ");
	scanf("%d", &num);
	for(i=1; i <= 10; i++){
		tich = num * i;
		printf("%3d * %d = %d\n", num, i, tich);
	}
	return 0;
}
