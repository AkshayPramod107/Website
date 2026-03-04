#include<stdio.h>

int main(){
    int a[7]={8, 15, 12, 7, 16, 20, 9};
    int size=7;
    for(int i=0;i<size;i++){
        if(a[i]%4==0){
            a[i]=0;
        }
    }
    for(int j=0;j<size;j++){
        printf("%d ",a[j]);
    }

    return 0;
}