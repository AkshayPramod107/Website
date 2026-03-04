#include<stdio.h>

int main(){
    int a[7]={7, 12, 13, 18, 11, 20, 9};
    int size=7,temp;
    for(int i=0;i<size;i++){
        int n=a[i];
        int flag=0;
        if( a[i]==0 || a[i]==1){
            flag=1;
        }
        else{
            for(int j=2;j<=n/2;j++){
                if(a[i]%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                a[i]=-1;
            }
        }
    }
    for(int k=0;k<size;k++){
        if(a[k]<0){
            for(int l=k;l<size-1;l++){
                a[l]=a[l+1];
            }
            size--;
            k--;
        }
    }
    for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
    }
    return 0;
}