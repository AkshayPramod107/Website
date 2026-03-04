#include<stdio.h>

int main(){
    int a[6]={12, 5, 18, 3, 20, 8};
    int size=6;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int j=0;j<size;j++){
        printf("%d ",a[j]);
    }
    return 0;
}