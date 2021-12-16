#include<stdio.h>
int i;
//nhap mang
void nhapMang(float X[], int n){
	for (i=0; i<n; i++){
		printf("X[%d] = ", i);
		scanf("%f", &X[i]);
	}
	printf("\n\n");
}
//xuat mang
void xuatMang(float X[], int n){
	for(i=0; i<n; i++){
		printf("X[%d] = %.2f\n", i, X[i]);
	}
	printf("\n\n");
}
// hop
void hop( float A[], int n, float B[], int m){
	int j, kiemTra, k =0;
	float C[150];
	for(i=0; i < n; i++){
		C[i] = A[i];
	}
	k=i;
	for(i=0; i < m; i++){
		kiemTra =1;
		for(j=0; j <n; j++){
			if(B[i] == A[j]){
				kiemTra = 0;
			}
		}
		if(kiemTra!=0){
		C[k]=B[i];
		k++;
		}
	}
	xuat(C, k);
}
int main (){
	float A[150], B[150], C[150]; 
	int n, m, k;
	printf("Nhap so phan tu cua mang A: ");
	scanf("%d", &n);
	nhapMang(A, n);
	xuatMang(A, n);
	printf("Nhap so phan tu cua mang B: ");
	scanf("%d", &n);
	nhapMang(B, n);
	xuatMang(B, n);
	hop(C,k);
	return 0;
}
