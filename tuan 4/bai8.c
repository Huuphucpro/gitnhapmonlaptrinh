#include<stdio.h>
int main(){
	int code;
	char c;
		printf("nhap vao ki tu:");
		scanf("%c" ,&c);
		code = (int)c;
		if(c >= 48 && c <= 57){
			printf("ki tu ban nhap vao la so");
		}else if(c >= 65 && c <= 90 || c >= 97 && c <= 122){
			printf("ki tu ban nhap vao la chu");
		}else{
			printf("ki tu ban nhap vao la ki tu dac biet");
		}
		printf("\nMa ASCII la %d\n" ,code);
	return 0;
}
