#include<stdio.h>
void nhapMang(int a[], int n){
int i;
for(i=0; i <= n-1; i++){
      printf("a[%d]=", i);
     scanf("%d", &a[i]);
     }
printf("\n\n");
}
void xuatMang(int a[], int n){
   int i;
   for(i=0; i <=n-1;i++){
   printf("a[%d] = %d\n", i ,a[i]);
   }
}
int timKiem(int a[], int n){
	int i, x;
	printf("nhap gia tri can tim: ");
	scanf("%d", &x);
	for(i=0; i < n; i ++){
		if(x == a[i]){
			return 1;
		}
	}
	return 0;
}
int main(){
	int a[1000];
	int  n;
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	nhapMang(a, n);
	xuatMang(a, n);
	if(timKiem(a, n) == 1){
		printf("tiem thay");
	}else{
		printf("khong tim thay");
	}
	return 0;
}
