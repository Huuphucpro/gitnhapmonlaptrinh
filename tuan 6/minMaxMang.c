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
float lonNhat(float a[], int n){
	int i;
	float Max = a[0];
	for(i=1; i<=n-1; i++){
		if(a[i] > Max){
			Max = a[i];
		}
	}
			return Max;
}
float nhoNhat(float a[], int n){
	int i;
	float Min = a[0];
	for(i=1; i<=n-1; i++){
		if(a[i] < Min){
			Min = a[i];
		}
	}
		return Min;
}
int main(){
	float a[1000];
	int  n;
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	nhapMang(a, n);
	xuatMang(a, n);
	printf("gia tri lon nhat la %f\n", lonNhat(a, n));
	printf("gia tri nho nhat la %f\n", nhoNhat(a, n));
	return 0;
}

