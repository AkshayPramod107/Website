#include<stdio.h>

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10},sum=0;
    for(int i=0;i<10;i++){
        sum=sum+a[i];
    }
    printf("The sum of all the numbers in the array is: %d",sum);
    return 0;
}