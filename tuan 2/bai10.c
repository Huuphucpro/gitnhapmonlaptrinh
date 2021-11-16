#include<stdio.h>
#include<math.h>
int main(){
	float doF, doC;
	printf ("nhap vao day do F: ");
	scanf("%f" ,&doF);
	doC = 5 * (doF - 32) / 9;
	printf("%.3f do F bang %f do C" ,doF, doC); 
	return 0;
}
