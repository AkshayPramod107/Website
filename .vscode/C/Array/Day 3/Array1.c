#include <stdio.h>

int main(){
   int size;
   printf("Enter the size of the array: ");
   scanf("%d",&size);
   int a[size];
   printf("Enter the elements of the array: ");
   for(int i=0;i<size;i++){
      scanf("%d",&a[i]);
   }
   printf("Enter the position from where you like to delete the element: ");
   int pos;
   scanf("%d",&pos);
   for(int i=pos-1;i<size-1;i++){
      a[i]=a[i+1];
   }
   size--;
   for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
   }  
   return 0;
}