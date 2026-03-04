#include<stdio.h>

int main(){
    int a[6]= {10, 15, 10, 20, 15, 30};
    int size=6,sum=0,count=0;
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j] && i!=j){
                flag=1;
                for(int k=j;k<size-1;k++){
                    a[k]=a[k+1];
                }
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
    for(int m=0;m<size;m++){
        printf("%d ",a[m]);
    }
    return 0;
}