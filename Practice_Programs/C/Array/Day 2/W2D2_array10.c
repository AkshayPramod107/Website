#include <stdio.h>

int main()
{
    int a[6]={5, 8, 13, 18, 7, 20};
    for(int i=0;i<6;i++){
        int flag=0;
        if(a[i]==0 || a[i]==1){
            flag=1;
        }
        else{
            for(int j=2;j<=a[i]/2;j++){
                if(a[i]%j==0){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
           a[i]=0;
        }
        if(a[i]%2==0 && a[i]>1){
           a[i]=1;
        }
    } 
        for(int j=0;j<6;j++){
        printf("%d  ",a[j]);
    }
    return 0;
}