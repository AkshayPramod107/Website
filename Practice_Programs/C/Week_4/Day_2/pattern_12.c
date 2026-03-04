#include<stdio.h>

int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            if(j<3){
                for(int k=1;k<=i;k++){
                    printf("* ");
                }
                printf("\n");
            }
        }
        for(int l=1;l<=i;l++){
            for(int m=1;m<=3*i;m++){
                printf("* ");
            }
            printf("\n");
        }
    }


    return 0;
}