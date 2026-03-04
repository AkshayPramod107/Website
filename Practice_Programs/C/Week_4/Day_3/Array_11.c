#include<stdio.h>

int main(){
    int a[8]={5, 10, 15, 8, 20, 7, 25, 12};
    int size=8;
    for(int i=0;i<size;i++){
        if(a[i]%5==0){
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