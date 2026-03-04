#include <stdio.h>

int main()
{
    int a[6]={10, 15, 8, 21, 30, 9};
    for(int i=0;i<6;i++){
        if(a[i]%2==0){
           a[i]=1;
        }
    }
    int sum=0;
    for(int j=0;j<6;j++){
       sum+=a[j];
    }  
    printf("The sum is %d",sum);
    return 0;
}