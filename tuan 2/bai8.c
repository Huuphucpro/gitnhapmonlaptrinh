#include<stdio.h>
#include<ctype.h>
int main (){
	char a,b;
	printf("nhap ki tu:\n");
	scanf("%c" ,&a);
	b = toupper(a);
	printf ("%c" ,b);
	return 0;
}
