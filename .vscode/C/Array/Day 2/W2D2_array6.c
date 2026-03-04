#include <stdio.h>

int main()
{
    int a[6]={6,15,10,9,30,25};
    for(int i=0;i<6;i++){
        if(a[i]%3==0){
           a[i]=0;
        }
    }
    for(int j=0;j<6;j++){
        printf("%d  ",a[j]);
    }
    return 0;
}