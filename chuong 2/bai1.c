#include <stdio.h>
#include <math.h>

int main(){
	int x1, y1, x2, y2;
	float AB;
	printf("nhap toa do A (x1, y1): \n"); scanf("\n%d%d" ,&x1, &y1);
	printf("nhap toa do B (x2, y2): \n"); scanf("\n%d%d" ,&x2, &y2);
	AB = sqrt(pow(( x2 - x1) , 2) + pow(( y2 - y1) , 2));
	printf("do dai AB la: %.4f" ,AB);
	return 0;	
}
