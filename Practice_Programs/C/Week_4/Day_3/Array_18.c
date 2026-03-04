#include<stdio.h>

int main(){
    int a[7]={10, 15, 10, 20, 15, 30, 10};
    int size=7;
    for(int i=0;i<size;i++){
        int flag=0;
        if(a[i]>0){
            for(int j=0;j<size;j++){
                if(a[i]==a[j] && i!=j){
                    flag=1;
                    a[j]=-1;
                }
            }
            if(flag==1){
                printf("%d ",a[i]);
            }
        }
    }
    return 0;
}