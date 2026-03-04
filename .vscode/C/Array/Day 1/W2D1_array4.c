#include<stdio.h>

int main(){
    int a[5]={10,25,30,45,50};
    for(int i=0;i<5;i++){
        if(a[i]>20)
            printf("%d  ",a[i]);
    }
    return 0;
}