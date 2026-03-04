#include<stdio.h>

int main(){
    int a[7]= {9, 10, 15, 8, 12, 25, 30};
    int size=7;
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            a[i]=1;
        }
        else if(a[i]%3==0){
            a[i]=0;
        }
    }
    for(int j=0;j<size;j++){
        printf("%d ",a[j]);
    }

    return 0;
}