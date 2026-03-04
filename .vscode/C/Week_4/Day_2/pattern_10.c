#include<stdio.h>

int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            printf("*\n");
        }
        for(int k=0;k<=i+1;k++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}