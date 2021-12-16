#include<stdio.h>
#include<math.h>
int main(){
	float y, k, f[100];
	int luaChon, i, n;
	printf("nhap lua chon (1,2,3)");
	scanf("%d", &luaChon);
	switch(luaChon){
		case 1:
			printf("nhap y");
			scanf("%f", &y);
			do{
				printf("nhap so phan tu cua mang");
				scanf("%d", &n);
				for(i=0; i <= n-1; i++){
	      			printf("a[%d]=", i);
	     			scanf("%f", &f[i]);
	     		}
				printf("\n\n");	
			}while(n > 100);
			
		case 2:
		case 3:
	}
}
