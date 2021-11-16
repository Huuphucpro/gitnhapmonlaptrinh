#include<stdio.h>
int i;
void nhapMang(int a[], int n){
	for(i=0; i<n; i++){
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	printf("\n\n");
}
void xuatMang (int a[], int n){
	for(i=0; i<n; i++){
		printf("a[%d]=%d\n", i, a[i]);
	}
}
int timKiem (int a[], int n){
	int x;
	printf("nhap so can tim: ");
	scanf("%d", &x);
	for(i=0; i<n; i++){
		if(x == a[i]){
			return 1;
		}
	}
	return 0;
}

int main(){
	int a[100], n;
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);
	nhapMang(a, n);
	xuatMang(a, n);
	if(timKiem(a, n) == 1){
		printf("gia tri can tim thuoc mang a");
	}else{
		printf("gia tri can tim khong thuoc mang a");
	}
	return 0;
}
