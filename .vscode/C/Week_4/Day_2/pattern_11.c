#include<stdio.h>

int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            if(j<2){
                printf("*\n");
            }
        }
        for(int k=0;k<=i;k++){
            for(int l=0;l<=i+1;l++){
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}