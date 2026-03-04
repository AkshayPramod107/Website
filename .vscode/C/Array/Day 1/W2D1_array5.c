#include<stdio.h>

int main(){
    int a[5]={12,8,15,20,9};
    for(int i=0;i<5;i++){
        if(a[i]%2==0)
            printf("%d  ",i);
    }
    return 0;
}