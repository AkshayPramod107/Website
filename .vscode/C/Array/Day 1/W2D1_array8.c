#include<stdio.h>

int main(){
    int a[6]={8,15,22,9,30,11},sum=0;
    for(int i=0;i<6;i++){
        if(i%2==1)
            sum=sum+a[i];
    }
    printf("The sum of odd numbers: %d",sum);
    return 0;
}