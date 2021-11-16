#include<stdio.h>
#include<math.h>
int main(){
	int a,b,dv,chuc,tram;
	printf("nhap 2 so co ba chu so: \n");
	scanf ("%d%d" ,&a ,&b);
	dv = b%10;
	chuc = b%100/10;
	tram = b/100;
	printf("cach nhan bai toan nhu sau:\n\n");
	printf("%10d\n" ,a);
	printf("%5c%4d\n",'x', b);
	printf("%12s\n","---------");
	printf("%10d\n" ,dv*a);
	printf("%9d\n" ,chuc*a);
	printf("%8d\n" ,tram*a);
	printf("%12s\n","---------");
	printf("%10d\n" ,a*b);
	return 0;
}
