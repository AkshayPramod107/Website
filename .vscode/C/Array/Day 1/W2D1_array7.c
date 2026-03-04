#include<stdio.h>

int main(){
    int a[5]={3,6,9,12,15};
    for(int i=0;i<5;i++){
        if(i%2==0)
            printf("%d  ",a[i]);
    }
    return 0;
}