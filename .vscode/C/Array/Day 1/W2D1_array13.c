#include<stdio.h>

int main(){
    int a[5]={15,23,8,42,17},find=42,flag=1;
    for(int i=0;i<5;i++){
        if(a[i]==find){
            printf("The values found at index: %d.",i);
            flag=0;
            break;
        }
    }
    if(flag)
        printf("Not found.");
    return 0;
}