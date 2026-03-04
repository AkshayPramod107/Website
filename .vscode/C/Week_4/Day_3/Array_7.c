#include<stdio.h>

int main(){
    int a[7]={12, 15, 8, 9, 20, 7, 30};
    int size=7;
    for(int i=0;i<size;i++){
        if(a[i]%4==0){
            for(int j=i;j<size-1;j++){
                a[j]=a[j+1];
            }
            size--;
            i--;
        }
        
    }
    for(int j=0;j<size;j++){
        printf("%d ",a[j]);
    }
    return 0;
}