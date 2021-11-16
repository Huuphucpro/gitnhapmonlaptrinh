#include<stdio.h>
#include<math.h>
int main(){
	float dienTich, banKinh, theTich, Pi = 3.141593;
	printf("dien tich hinh tron: \n");
	scanf("%f" ,&dienTich);
	banKinh = sqrt(dienTich / (4 * Pi));
	printf("ban kinh hinh cau la: %.3f\n" ,banKinh);
	theTich = (4 * Pi * pow(banKinh, 3)) / 3;
	printf("The tich hinh cau la: %.3f" ,theTich);
	return 0;
}
