#include<stdio.h>

int main(){
    int a[6]={10, 15, 10, 20, 15, 30};
    int size=6;
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=0;j<size;j++){
            if(a[i]==a[j] && i!=j){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}