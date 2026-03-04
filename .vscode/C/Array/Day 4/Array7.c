#include<stdio.h>

int main(){
    int a[7]={10, 15, 10, 20, 15, 30, 10},b[7]={0,0,0,0,0,0,0};
    int size=7;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j] && i!=j && b[i]==0){
                b[j]=1;
                break;
            }
        }
    }
    for(int k=0;k<size;k++){
        if(b[k]==1){
            printf("%d  ",a[k]);
        }
    }
    return 0;
}