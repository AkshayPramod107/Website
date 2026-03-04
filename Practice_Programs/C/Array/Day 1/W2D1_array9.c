#include<stdio.h>

int main(){
    int a[7]={12,7,18,5,22,9,14},count=0;
    for(int i=0;i<7;i++){
        if(i%3==0)
            count++;
    }
    printf("Total number of values divisible by 3 in the array is: %d",count);
    return 0;
}