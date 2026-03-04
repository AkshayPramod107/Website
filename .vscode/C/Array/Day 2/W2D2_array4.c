#include <stdio.h>

int main(){
    int a[6]={12,7,18,9,24,11};
    for(int i=0;i<6;i++){
        if(a[i]%2==0){
           a[i]=0;
        }
    }
    for(int j=0;j<6;j++){
        printf("%d  ",a[j]);
    }
    return 0;
}