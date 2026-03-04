#include<stdio.h>

int main(){
    int a[6]={6, 15, 10, 9, 30, 25};
    int size=6,sum=0;
    for(int i=0;i<size;i++){
        if(a[i]%5==0){
            a[i]=0;
        }
        sum=sum+a[i];
    }
    printf("The sum is: %d",sum);
    return 0;
}