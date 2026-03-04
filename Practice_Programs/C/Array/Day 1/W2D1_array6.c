#include<stdio.h>

int main(){
    int a[6]={5,12,18,7,25,30};
    for(int i=0;i<6;i++){
        if(a[i]%2==0 && a[i]>10)
            printf("%d  ",a[i]);
    }
    return 0;
}