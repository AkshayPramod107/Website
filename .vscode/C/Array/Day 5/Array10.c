#include<stdio.h>

int main(){
    int a[7]={10, 15, 10, 20, 15, 30, 10},b[7]={0};
    int size=7;
    for(int j=0;j<size;j++){
        printf("%d  ",a[j]);
        printf("%d\n",b[j]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j]){
                b[i]=b[j]=1;
            }
        }
    }
    for(int j=0;j<size;j++){
        printf("%d  ",a[j]);
        printf("%d\n",b[j]);
    }
    for(int i=0;i<size;i++){
        if(b[i]==1){
            for(int j=i;j<size-1;j++){
                a[j]=a[j+1];
            }
            printf("\n\nItteration of I: %d and element: %d ",i,a[i]);
            size--;
        }
    }
    
    for(int j=0;j<size;j++){
        printf("%d  ",a[j]);
        printf("%d\n",b[j]);
    }
    return 0;
}