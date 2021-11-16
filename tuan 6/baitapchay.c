#include<stdio.h>
void nhapMang(float a[], int n){
int i;
for(i=0; i <=n-1; i++){
printf("a[%d]=", i);
scanf("%f", &a[i]);
}
printf("\n\n");
}

void xuatMang(float a[], int n){
int i;
for(i=0; i <=n-1; i++){
printf("a[%d]=%f\n", i, a[i]);
}
}
float trungBinh(float a[], int n){
int i;
float Aver=0, sum =0;
for(i=0; i <= n-1; i++){
sum += a[i];
Aver = sum/n;
}
return Aver;
}



float Max(float a[], int n){
int Max = a[0], i;
for(i=0;  i <= n-1; i++){
if(a[i] > Max){
Max = a[i];
}
}
return Max;
}

float Min(float a[], int n){
	int Min = a[0], i;
for(i=0; i<=n-1; i++){
if(a[i] < Min){
Min = a[i];
}
return Min;
}
}


int main(){
float a[100];
int n;
printf("nhap so phan tu cua mang:");
scanf("%d", &n);
nhapMang(a,n);
xuatMang(a,n);
printf("trung binh là %f\n",trungBinh(a,n));
printf("max là %f\n",Max(a,n));
printf("min là %f\n",Min(a,n));
}

