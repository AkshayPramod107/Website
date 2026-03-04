#include<stdio.h>

int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=10;j++){
            if(i<6){
                if(j<=i || j>=11-i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else{
                if(j<11-i || j>i){
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