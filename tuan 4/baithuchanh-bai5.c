	#include<stdio.h>
	int main(){
		int so, chuc, dvi;
		printf("nhap so nguyen co hai chu so: ");
		scanf("%d" ,&so);
			chuc = so / 10;
			dvi = so % 10;
		if(so >= 10 && so <=99){
			switch(chuc){
				case 1:
					printf("Muoi");
					break;
				case 2:
					printf("Hai muoi");
					break;
				case 3:
					printf("Ba muoi");
					break;
				case 4:
					printf("Bon muoi");
					break;
				case 5:
					printf("Nam muoi");
					break;
				case 6:
					printf("Sau muoi");
					break;
				case 7:
					printf("Bay muoi");
					break;
				case 8:
					printf("Tam muoi");
					break;
				case 9:
					printf("Chin muoi");
					break;
			}
			switch(dvi){
				case 1:
					printf(" mot");
					break;
				case 2:
					printf(" hai");
					break;
				case 3:
					printf(" ba");
					break;
				case 4:
					printf(" bon");
					break;
				case 5:
					printf(" nam");
					break;
				case 6:
					printf(" sau");
					break;
				case 7:
					printf(" bay");
					break;
				case 8:
					printf(" tam");
					break;
				case 9:
					printf(" chin");
					break;
			}
		}else{
			printf("ban nhap sai, nhap lai!");
		}
	}
