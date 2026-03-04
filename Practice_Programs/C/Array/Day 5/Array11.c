#include<stdio.h>

int main(){
    int a[7]={10, 15, 10, 20, 15, 30, 10};
    int size=7;
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j]){
                for(int k=j;k<size-1;k++){
                    a[k]=a[k+1];
                }
                flag=1;
                size--;
                j--;
            }
        }
        if(flag==1){
            for(int l=i;l<size-1;l++){
                a[l]=a[l+1];
            }
            size--;
            i--;
        }
    }
    
    for(int j=0;j<size;j++){
        printf("%d  ",a[j]);
    }
    return 0;
}