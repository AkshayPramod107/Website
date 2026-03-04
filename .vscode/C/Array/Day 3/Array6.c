#include <stdio.h>

int main(){
   int a[7]={7, 12, 13, 18, 11, 20, 9};
   int size=7;
   for(int i=0;i<size;i++){
      int n=a[i];
      int flag=0;
      if(a[i]==0 || a[i]==1){
         flag=1;
      }
      else{
         for(int j=2;j<=n/2;j++){
            if(a[i]%j==0){
               flag=1;
               break;
            }
         }
         if(flag==0){
            for(int k=i;k<size-1;k++){
               a[k]=a[k+1];
            }
            size--;
            i--;
         }
      }
   }
   for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
   }  
   return 0;
}