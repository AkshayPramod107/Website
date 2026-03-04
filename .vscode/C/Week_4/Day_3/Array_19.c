#include<stdio.h>

int main(){
    int a[7]={10, 15, 10, 20, 15, 30, 10};
    int size=7;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j]){
                for(int k=j;k<size-1;k++){
                    a[k]=a[k+1];
                }
                size--;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}