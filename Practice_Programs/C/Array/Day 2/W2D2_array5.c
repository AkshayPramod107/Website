#include <stdio.h>

int main()
{
    int a[6]={10,15,8,21,30,9};
    for(int i=0;i<6;i++){
        if(a[i]%2==1){
           a[i]=0;
        }
    }
    for(int j=0;j<6;j++){
        printf("%d  ",a[j]);
    }
    return 0;
}