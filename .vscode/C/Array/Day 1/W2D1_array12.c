#include<stdio.h>

int main(){
    int a[6]={12,25,8,30,15,20},large=0;
    for(int i=0;i<7;i++){
        if(large<a[i] && a[i]%2==0){
            large=a[i];
        }
    }
    printf("The largest even number in the array is: %d",large);
    return 0;
}