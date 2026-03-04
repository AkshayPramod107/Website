#include<stdio.h>

int main(){
    int a[5]={5, 10, 15, 20, 25};
    int size=5,temp;
    for(int i=0;i<size/2;i++){
        temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
    }
    for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
    }
    return 0;
}