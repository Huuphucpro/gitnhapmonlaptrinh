#include<stdio.h>
int i,j;
void nhapMaTran(int a[][100], int c, int r){
	for(i = 0; i < r; i ++){
		for(j = 0; j < c; j++){
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatMaTran(int a[][100], int c, int r){
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int a[100][100], c, r;
	printf("nhap so hang cua ma tran: ");
	scanf("%d", &r);
	printf("nhap so cot cua ma tran: ");
	scanf("%d", &c);
	nhapMaTran(a, c, r);
	xuatMaTran(a, c, r);
	return 0;
}
