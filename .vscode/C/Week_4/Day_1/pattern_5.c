#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=9;j++){
            if(j==i+4 || j+i==6 || i==5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}