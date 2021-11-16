#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, denta;
	float x1, x2, xo;
	printf("nhap 3 gia tri a, b, c\n");
	scanf("%d%d%d" ,&a ,&b ,&c);
	if(a == 0){
		printf("ban nhap sai du lieu");
	}else{
		denta = (b*b)- (4*a*a*c);
		if(denta > 0){
			x1 = (-b + sqrt(denta)) / 2*a;
			x2 = (-b - sqrt(denta)) / 2*a;
			printf("Phuong trinh co hai nghiem han biet: %.2f va %.2f\n" ,x1, x2);
		}else if(denta == 0){
			xo = (-b)/ 2*a;
			printf("Phuong trinh co nghiem kep: %f\n" ,xo);
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}
	return 0;
}

