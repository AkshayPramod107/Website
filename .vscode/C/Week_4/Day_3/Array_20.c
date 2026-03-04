#include<stdio.h>

int main(){
    int a[7]= {10, 15, 10, 20, 15, 30, 25};
    int size=7;
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=0;j<size;j++){
            if(a[i]==a[j] && i!=j){
                flag=1;
                break;
            }
        }
        if (flag==0){
            for(int k=i;k<size-1;k++){
                a[k]=a[k+1];
            }
            size--;
            i--;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
}