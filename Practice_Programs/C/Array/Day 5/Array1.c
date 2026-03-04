#include<stdio.h>

int main(){
    int a[7]={10, 15, 10, 20, 15, 30, 25};
    int size=7,sum=0;
    for(int i=0;i<size;i++){
        if(a[i]%3==0){
            a[i]=0;
        }
    }
    for(int j=0;j<size;j++){
      sum+=a[j];
    }
    printf("The sum is: %d",sum);
    return 0;
}