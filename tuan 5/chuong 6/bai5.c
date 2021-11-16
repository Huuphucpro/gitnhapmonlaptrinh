#include<stdio.h>
int gcd(int a, int b){
    while (a*b != 0){ 
        if (a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    return a + b;
}
int main(){
	int num1, num2, ucln;
	printf("nhap 2 so nguyen duong:");
	scanf("%d%d" ,&num1, &num2);
	ucln = gcd(num1,num2);
	printf("%d",ucln);
}
