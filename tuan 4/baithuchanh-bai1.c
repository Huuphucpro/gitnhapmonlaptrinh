#include<stdio.h>
int main(){
	char diem;
	printf("nhap vao diem chu: ");
	scanf("%c" ,&diem);
	if(diem >= 97 && diem <= 122){
		diem = diem - 32;
	}
	switch(diem){
		case 'E':
			printf("\nExcellent");
			break;
		case 'V':
			printf("\nVery Good");
			break;
		case 'G':
			printf("\nGood");
			break;
		case 'A':
			printf("\nAverage");
			break;
		case 'F':
			printf("\nFail");
			break;
		default:
			printf("\nNhap sai, vui long nhap lai!");
	}
	printf("\n\n");
	return 0;
}
