#include<stdio.h>

int main(){
    int a[6]={10, 15, 10, 20, 15, 30};
    int size=6;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j] && a[i]>=0){
                a[j]=-1;
            }
        }
    }
    for(int j=0;j<size;j++){
        printf("%d ",a[j]);
    }

    return 0;
}