#include <stdio.h>

int main(){
   int a[7]={12, 7, 18, 5, 22, 9, 14};
   int size=7;
   for(int i=0;i<size;i++){
      int flag=0;
      for(int j=0;j<size;j++){
         if(a[i]>a[j]){
            flag=1;
            break;
         }
      }
      if(flag==0){
         if(i+1<size){
            for(int k=i;k<size-1;k++){
               a[k]=a[k+1];
            }
            size--;
         }
         else{
            size--;
         }
      }
   }

   for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
   }  
   return 0;
}