#include<stdio.h>
#include<math.h>
int main(){
	float x, y, ketQua;
	printf("nhap vao hai so nguyen:\n");
	scanf("%f%f" ,&x ,&y);
	ketQua = (sqrt(1 + pow(x,2) + pow(y,2))) / (3 + pow((x + y),2));
	printf("ket qua la: %.4f" ,ketQua);
	return 0;
}
