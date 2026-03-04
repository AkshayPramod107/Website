#include<stdio.h>

int main(){
    int a[7]={12, 7, 18, 5, 22, 9, 14};
    int size=7,end=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                i=j;
            }
            if(j==size-1){
                end=1;
            }
            
        }
        if(end==1){
            for(int k=i;k<size-1;k++){
                a[k]=a[k+1];
            }
            size--;
            break;
        }        
    }
    for(int j=0;j<size;j++){
        printf("%d ",a[j]);
    }
    return 0;
}