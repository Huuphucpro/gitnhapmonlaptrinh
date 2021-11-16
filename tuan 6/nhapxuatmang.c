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
int main(){
	float a[1000];
	int  n;
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	nhapMang(a, n);
	xuatMang(a, n);
	return 0;
}
