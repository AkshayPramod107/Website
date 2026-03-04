#include <stdio.h>

int main(){
   int a[9]={5, 10, 15, 8, 7, 20, 9, 12, 18};
   int size=9;
   for(int i=0;i<size;i++){
      for(int j=0;j<2;j++){
         if(a[i]%2==1 && i+1<size){         
            for(int k=i+1;k<size-1;k++){
               a[k]=a[k+1];
            }
            size--;
         }
      }
   }
   for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
   }  
   return 0;
}