#include<stdio.h>

int main(){
    int a[7]={25,12,8,45,3,67,19},small=0;
    small=a[0];
    for(int i=0;i<7;i++){
        if(a[i]<small){
            small=a[i];
        }
    }
    printf("The smallest number in the array is: %d",small);
    return 0;
}