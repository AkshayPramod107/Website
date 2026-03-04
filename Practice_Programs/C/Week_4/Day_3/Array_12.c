#include<stdio.h>

int main(){
    int a[9]={5, 10, 15, 8, 20, 7, 25, 12, 30};
    int size=9;
    for(int i=0;i<size;i++){
        int delete_count=0;
        if(a[i]%5==0){
            delete_count=2;
            while(delete_count>0 && i+1<size){
                for(int j=i+1;j<size-1;j++){
                    a[j]=a[j+1];
                }
            delete_count--;
            size--;
            }
        }    
    }
    for(int j=0;j<size;j++){
        printf("%d ",a[j]);
    }
    return 0;
}