#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap a: "); scanf("%d" ,&a);
	printf("nhap b: "); scanf("%d" ,&b);
	c = a;
	a = b;
	b = c;
	printf("a sau khi hoan doi la %d\n" ,a);
	printf("b sau khi hoan doi la %d\n" ,b);
	return 0;
}
