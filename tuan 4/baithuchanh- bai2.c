#include<stdio.h>
int main(){
	int thu;
	printf("nhap vao diem chu: ");
	scanf("%d" ,&thu);
	switch(thu){
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Nhap sai, vui long nhap lai!");
	}
	printf("\n\n");
	return 0;
}
