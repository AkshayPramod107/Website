#include <stdio.h>

int main(){
    for(int i=0;i<5;i++){
        char ch='A';
        for(int j=0;j<9;j++){
            if(j>=4-i && j<=4+i){
                printf("%c ",ch++);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}