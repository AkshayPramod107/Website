#include<stdio.h>

int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if( i+j==6 || j==i+4 || j==i-4 || i+j==14 ){
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