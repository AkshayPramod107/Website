#include<stdio.h>

int main(){
    int temp=1;
    for(int i=1;i<=9;i++){
        int num=1;
        for(int j=1;j<=temp;j++){
            printf("%d ",num);
            j<=temp/2?num++:num--;
        }
        printf("\n");
        temp=i<5?temp+2:temp-2;
    }


    return 0;
}