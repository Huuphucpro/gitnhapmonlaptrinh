#include<stdio.h>
int i,j;
void nhapMaTran(int a[][100], int n){
	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j++){
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuatMaTran(int a[][100], int n){
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("a[%d][%d]=%d\t", i,j,a[i][j]);
		}
		printf("\n");
	}
}
int traceMaTran(int a[][100], int n){
	int trace;
	for(i=0; i <n; i++){
		for(j=0; j <n; j++){
			if(i == j){
				trace += a[i][j];
			}
	}
	}
	return trace;
}
int main(){
	int a[100][100], n;
	printf("nhap so hang/cot cua ma tran: ");
	scanf("%d", &n);
	nhapMaTran(a, n);
	xuatMaTran(a, n);
	printf("\nTrace = %d\n", traceMaTran(a, n));
	return 0;
}
