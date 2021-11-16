#include<stdio.h>
int main(){
	int s1,s2,s3,max, min, num2nd;
	printf("nhap 3 so: \n");
	scanf("%d%d%d" ,&s1 ,&s2 ,&s3);
	min = s1;
	if(s2 < min)
		min = s2;
	if(s3 < min || s3 < s1 && s3 < s2)
		min = s3;
	///////	
	max = s1;
	if(s2 > max)
		max = s2;
	if(s3 > max)
		max = s3;
	///////	
	if(s1 > min && s1 < max)
		num2nd = s1;
	if(s2 > min && s2 < max)
		num2nd = s2;
	if(s3 > min && s3 < max)
		num2nd = s3;
	printf("1st Number = %d\n" , min);
	printf("2nd Number = %d\n" , num2nd);	
	printf("3th Number = %d\n" , max);
	return 0;
}
