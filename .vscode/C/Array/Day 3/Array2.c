#include <stdio.h>

int main(){
   int a[7]={12,7,18,9,24,11,30};
   int size=7;
   for(int i;i<size;i++){
      if(a[i]%2==0){
         for(int j=i;j<size-1;j++){
            a[j]=a[j+1];
         }
         size--;
         i--;
      }
   }
   for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
   }  
   return 0;
}