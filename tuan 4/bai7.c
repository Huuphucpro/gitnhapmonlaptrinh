#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("nhap 3 canh cua tam giac: \n\n");
	scanf("%f%f%f" ,&a ,&b, &c);
	if((a - b < c) && (b - a < c) && (c - a < b) && (a - c < b) && (b - c < a) && (c - b < a)){
		printf ("%.2f %.2f %.2f co the tao thanh hinh tam giac " ,a, b, c);
		if((a == b) && (a == c) && (b == c)){
			printf("deu");
		}else if((a == b) || (a == c) || (b == c)){
			printf("can");
		}else if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == a*a)){
			printf("vuong");
		}
		else{
			printf("thuong");
		}
	
	}else{
		printf ("%.2f %.2f %.2f khong the tao thanh hinh tam giac" ,a, b, c);
	}
	
	return 0;
}
