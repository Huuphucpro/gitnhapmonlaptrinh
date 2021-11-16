#include<stdio.h>
int main(){
	int doC;
	printf("nhap nhiet do:\n");
	scanf("%d" ,&doC);
	if(doC < 0){
		printf("%d  Freezing weather\n" ,doC);
	}else if(doC > 0 && doC <= 10){
		printf("%d  Very Cold weather\n" ,doC);
	}else if(doC > 10 && doC <= 20){
		printf("%d  Cold weather\n" ,doC);
	}else if(doC > 20 && doC <= 30){
		printf("%d  Nomal in temp\n" ,doC);
	}else if(doC > 30 && doC < 40){
		printf("%d  its Hot\n" ,doC);
	}else if(doC >= 40){
		printf("%d  its Very Hot\n" ,doC);
	}
	return 0;
}

