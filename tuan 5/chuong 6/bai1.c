#include<stdio.h>
int main (){
	int i, n, soHang;
	float s;
	printf("nhap so cac so hang can tinh trung binh cong: ");
	scanf("%d" ,&n);
	for(i=1; i <=n; i++){
		printf("nhap so han thu %d: " ,i);
		scanf("%d" ,&soHang);
		s += soHang;
	}
	printf("TBC bang: %.2f",s/n);
	return 0;
	
}

