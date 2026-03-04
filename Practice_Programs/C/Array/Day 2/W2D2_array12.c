#include <stdio.h>

int main()
{
    int a[7]={12, 7, 16, 9, 20, 11, 8};
    for(int i=0;i<7;i++){
        if(a[i]%4==0){
           a[i]=0;
        }
    }
    int sum=0;
    for(int j=0;j<7;j++){
       sum+=a[j];
    }  
    printf("The sum is %d",sum);
    return 0;
}