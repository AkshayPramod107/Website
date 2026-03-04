#include<stdio.h>

int main(){
    int a[4]={5, 8, 12, 3};
    int size=4,temp,i=0;
    while(i<size/2){
        temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
        i++;
    }
    for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
    }
    return 0;
}