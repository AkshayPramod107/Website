#include<stdio.h>

int main(){
    int a[7]={5, 10, 8, 15, 12, 7, 20};
    int size=7;
    for(int i=0;i<size;i++){
        if(a[i]%2==1){
            for(int j=i+1;j<size-1;j++){
                a[j]=a[j+1];
            }
            size--;
        }     
    }
    for(int j=0;j<size;j++){
        printf("%d ",a[j]);
    }
    return 0;
}