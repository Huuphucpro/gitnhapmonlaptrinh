#include <stdio.h>
#include <math.h>
#include <conio.h>

void inPut(float X[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("nhap gia tri a[%d] : ",i);
		scanf("%f",&X[i]);
	}
}

void outPut(float X[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("gia tri tung phan tu a[%d] la : %f \n",i,X[i]);
	}
}

//

float trungbinh (float X[],int n){
        int tong =0 ,i ;
        float m;
       for (i=0 ; i<n ;i++){
          tong += X[i];    
}
          m=tong / n ;
    return m;
}


//phuc
float tongBinhPhuong(float X[], int n){

   int i;

   float ss=0;

   for(i=0; i <n; i++){

        ss  +=  pow(X[i],2);

   }

return ss;

}

//tuan
float variance(float X[],int n){

     float m,ss,dd;

    m=trungbinh(X,n);

    ss=tongBinhPhuong(X,n);

    dd=sqrt((ss/n)-pow(m,2));

    return dd;

}

float dolechchuan(float X[],int n){
	float dd,d;
    
	dd=variance(X,n);

	d=sqrt(dd);

	return d;

}




int main()
{
  float X[1000];
  int n;
  
  printf("nhap n: ");
  scanf("%d",&n);
  printf("\n");
  inPut(X,n);
  printf("\n");
  outPut(X,n);
  printf("\n");
  printf("gia tri tb la : %f \n",trungbinh(X,n));
  printf("tong binh phuong la: %f \n",tongBinhPhuong(X,n));
  printf("variance la : %f  \n",variance(X,n));
  printf("delechchuan la : %f \n",dolechchuan(X,n));
  
  

  return 0;
}
