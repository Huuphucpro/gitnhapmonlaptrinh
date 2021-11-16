#include<stdio.h>
void nhapMang(float a[], int n){
int i;
for(i=0; i <= n-1; i++){
      printf("a[%d]=", i);
     scanf("%f", &a[i]);
     }
printf("\n\n");
}
void xuatMang(float a[], int n){
   int i;
   for(i=0; i <=n-1;i++){
   printf("a[%d] = %f\n", i ,a[i]);
   }
}
void chen(int n,float a[]){
	int i,k;
	float x;
	printf("Nhap vi tri can chen: ");
	scanf("%d",&k);
	printf("Nhap gia tri chen: ");
	scanf("%f",&x);
	for (i=n;i>=k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
	xuatMang(a, n);
}
int main(){
	float a[1000];
	int  n;
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	nhapMang(a, n);
	xuatMang(a, n);
	chen(a, n);
	return 0;
}
