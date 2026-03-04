#include<stdio.h>

int main(){
    for(int i=0;i<5;i++){
        int num=1;
        for(int j=0;j<9;j++){
            if(j>=4-i && j<=4+i){
                if((i+j)%2==0)
                    printf("%d ",num++);
                else
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