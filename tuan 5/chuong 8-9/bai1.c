#include<stdio.h>
#include<math.h>
int main(){
	int i, a, t=1;
	printf("nhap a: ");
	scanf("%d", &a);
	for(i=2; i <= sqrt(a); i++){
			if(a%i == 0){
			t = 0;
			break;
			}
	}
		if (t == 1){
			printf("%d la so nguyen to.\n",a);
		}
		else {
			printf("%d khong phai la so nguyen to.\n",a);
		}
	return 0;
}
