#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap a: "); scanf("%d" ,&a);
	printf("nhap b: "); scanf("%d" ,&b);
	c = a; // gán a vào biến tạm c, khi này c sẽ bằng a
	a = b;	// gán a bằng b 
	b = c;	// gán b = biến tạm c (tức bằng với a ban đầu)	
	printf("a sau khi hoan doi la %d\n" ,a);
	printf("b sau khi hoan doi la %d\n" ,b);
	return 0;
}
