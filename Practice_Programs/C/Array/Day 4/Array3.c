#include<stdio.h>

int main(){
    int a[5]={5, 2, 8, 1, 9};
    int size=5,temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
    }
    return 0;
}