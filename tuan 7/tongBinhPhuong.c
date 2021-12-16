#include <stdio.h>
#include<math.h>
float tongBinhPhuong(float x[], int n){
   int i;
   float ss=0;
   for(i=0; i <n; i++){
        ss  +=  pow(x[i],2);
   }
return ss;
}

