#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        int num=1;
        for(int j=1;j<=9;j++){
            if( j<5+i && j>5-i){
                printf("%d ",num);
                j<5?num++:num--;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}