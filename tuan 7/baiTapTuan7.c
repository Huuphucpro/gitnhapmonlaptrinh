#include<stdio.h>
#include<math.h>
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
//int tongBinhPhuong(int a[], int n){
//	int i;
//   float  ss=0;
//   for(i=0; i <n; i++){
//        ss  +=  pow(a[i],2);
//   }
//   return ss;
//}
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
void giamDan(int a[], int n){
	int tam, j;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[j] > a[i]){
				tam = a[i];
				a[i] = a[j];
				a[j]= tam;
			}
		}
	}
	xuatMang(a,n);
}

int main(){
	int a[100], n;
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);
	nhapMang(a, n);
	xuatMang(a, n);
//	if(timKiem(a, n) == 1){
//		printf("gia tri can tim thuoc mang a\n");
//	}else{
//		printf("gia tri can tim khong thuoc mang a\n");
//	}
printf("\n\nmang sau khi sap xep GIAM DAN:\n");
	giamDan(a, n);
//	printf("%d",tongBinhPhuong(a, n));
	return 0;
}
