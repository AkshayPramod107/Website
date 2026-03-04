#include<stdio.h>

int main(){
    int a[7]={12, 7, 18, 9, 24, 11, 30};
    int size=7;
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            a[i]=1;
        }
        else{
            a[i]=0;
        }
    }
    for(int j=0;j<size;j++){
        printf("%d ",a[j]);
    }

    return 0;
}