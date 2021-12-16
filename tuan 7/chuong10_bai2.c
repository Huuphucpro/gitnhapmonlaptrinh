#include<stdio.h>
#include<math.h>
int i, search;
void nhapMang(int a[], int n){
for (i=0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatMang (int a[], int n){
	for(i=0; i<n; i++){
		printf("a[%d] = %d\n", i, a[i]);
	}
}
void SNT(int a[], int n){
	for(i=2; i<sqrt(n); i++){
		if(a[i] % i == 0){
			printf("a[%d] = %d\t", i, a[i]);
		}
	} 
}
void xuatKhoangBC(int a[], int n){
	int b, c;
	do{
		printf("nhap gia tri a: ");
		scanf("%d", &b);
		printf("nhap gia tri b: ");
		scanf("%d", &c);
	if(c<b){
		printf("nhap sai! Yeu cau: a < b.\n");
	}
	}while(b > c);
	for(i=0; i<n; i++){
		if(a[i]>b && a[i]<c){
			printf("a[%d] = %d\t", i, a[i]);
		}
	}
}
void xuatXY(int a[], int n){
	int x, y;
	do{
		printf("nhap gia tri x: ");
		scanf("%d", &x);
		printf("nhap gia tri y: ");
		scanf("%d", &y);
	if(x>y){
		printf("nhap sai! Yeu cau: x < y.\n");
	}
	}while(y < x);
	for(i=x; i<=y; i++){
		printf("a[%d] = %d\t", i, a[i]);
	}
}
int tongSoChan(int a[], int n){
	int sum=0;
	for (i =0; i< n; i++){
		if(a[i] % 2 == 0){
			sum += a[i];
		}
	}
	return sum;
}
void themPhanTu(int a[], int n){
	int valueInsert, adrInsert;
	printf("nhap vi tri can chen:");
	scanf("%d", &adrInsert);
	printf("nhap gia tri can chen:");
	scanf("%d", &valueInsert);
	for(i=n; i > adrInsert; i--){
		a[i] = a[i-1];
	}
	a[adrInsert] = valueInsert;
	n++;
	xuatMang(a,n);
}
void xoaPhanTu(int a[], int n){
	int adrDel;
	printf("nhap vi tri can xoa: ");
	scanf("%d", &adrDel);
	for(i=adrDel; i <n-1; i++){
		a[i] = a[i+1];
	}
	--n;
	xuatMang(a,n);
}
int timKiem(int a[], int n){
	printf("\n\nnhap gia tri can tim: ");
	scanf("%d", &search);
	for(i=0; i< n; i++){
		if(search == a[i]){
			return 1;
		}
	}
	return 0;
}
void tangDan(int a[], int n){
	int j, tam;
	for(i=0; i<n-1; i++){
		for(j = i+1; j<n; j++){
			if(a[j] < a[i]){
				tam = a[i];
				a[i]= a[j];
				a[j]= tam;
			}
		}
	}
	xuatMang(a, n);
}
void giamDan(int a[], int n){
	int j, tam;
	for(i=0; i<n-1; i++){
		for(j = i+1; j<n; j++){
			if(a[j] > a[i]){
				tam = a[i];
				a[i]= a[j];
				a[j]= tam;
			}
		}
	}
	xuatMang(a, n);
}
int main(){
	int a[100], n;	
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);
	nhapMang(a, n);
	printf("\n\nCac gia tri cua mang la:\n");
	xuatMang(a, n);
//	printf("\n\nSo nguyen to co trong mang la:\n");
//	SNT(a, n);
//	printf("\n\nXuat phan tu co gia tri tu A den B:\n");
//	xuatKhoangBC(a, n);
	printf("\n\n\nXuat phan tu tu vi tri X den Y:\n");
	xuatXY(a, n);
	printf("\n\n\ntong cac so chan trong mang la %d\n\n\n", tongSoChan(a, n));
	themPhanTu(a, n);
	xoaPhanTu(a,n);
	if(timKiem(a, n) == 1){
		printf("Gia tri %d o vi tri a[%d].", search, i);
	}else{
		printf("Khong tim thay gia tri %d trong mang", search);
	}
	printf("\n\nMang sau khi sap xep TANG DAN:\n");
	tangDan(a, n);
	printf("\n\nMang sau khi sap xep GIAM DAN:\n");
	giamDan(a, n);
	return 0;
}
