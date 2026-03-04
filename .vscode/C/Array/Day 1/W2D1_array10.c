#include<stdio.h>

int main(){
    int a[7]={12,45,23,67,34,89,10},large=0;
    for(int i=0;i<7;i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    printf("The largest number in the array is: %d",large);
    return 0;
}