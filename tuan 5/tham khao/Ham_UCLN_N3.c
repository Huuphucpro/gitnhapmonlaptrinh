#include<stdio.h>
//Mo phong theo thuat toan cua TRONG
//Ham UCLN1 la cai thien tu Ham UCLN
//Ham UCLN ko co gia tri tra ve

void UCLN(int x, int y)
{
	int i, uoc;
	for(i=1; (i<=x || i<=y); i++){
		if(x%i==0 && y%i ==0)
         	uoc = i;
         }
         printf("USCLN= %d\n",uoc);
}

//Ham co gia tri tra ve la INT

int UCLN1(int n, int m)
{
	int i, lap, uoc;
	if(n < m){
		lap = n;
	}else{
		lap = m;
	}
     for(i=1; i<=lap; i++){
         if(n%i==0 && m%i ==0)
         	uoc = i;
         }
	return uoc;
}

int main(){
    int a,b,i,uoc, lap;
    printf("nhap hai so a va b\n");
    scanf("%d%d",&a,&b);
	UCLN(a, b);
	printf("UCLN tinh theo ham UCLN1 la: %d\n", UCLN1(a,b));

    return 0;
}
