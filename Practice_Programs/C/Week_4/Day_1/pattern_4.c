#include<stdio.h>

int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(i<6){
                if(j<5+i && j>5-i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else{
                if(j>i-5 && j<15-i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}