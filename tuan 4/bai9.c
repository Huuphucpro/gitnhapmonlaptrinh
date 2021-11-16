#include<stdio.h>
int main(){
	char kiTu;
	printf("nhap vao ki tu: ");
	scanf("%c" ,&kiTu);
	if(kiTu == 'a' || kiTu == 'e' || kiTu == 'o' || kiTu == 'i' || kiTu == 'u'){
		printf("ki tu %c la nguyen am" ,kiTu);
	}else{
		printf("ki tu %c la phu am" ,kiTu);
	}
	return 0;
}
