#include <stdio.h>

int main(){
   int a[9]= {5, 10, 15, 8, 20, 7, 25, 12, 30};
   int size=9;
   for(int i=0;i<size;i++){
      printf("%d  ",a[i]);
      if(a[i]%5==0){
         i+=2;
      }
   }
   return 0;
}