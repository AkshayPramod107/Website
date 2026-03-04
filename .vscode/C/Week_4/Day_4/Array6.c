#include<stdio.h>

int main(){
    int a[7]={12, 15, 8, 9, 20, 7, 30};
    int size=7;
    for(int i=0;i<size/2;i++){
        int temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
    }
    for(int j=0;j<size;j++){
        if(a[j]%3==0){
            for(int k=j;k<size-1;k++){
                a[k]=a[k+1];
            }
            size--;
            j--;
        }
    }
    for(int m=0;m<size;m++){
        printf("%d ",a[m]);
    }
    return 0;
}