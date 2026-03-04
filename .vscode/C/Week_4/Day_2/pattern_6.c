#include<stdio.h>

int main(){
    for(int i=0;i<5;i++){
        int ch='A';
        for(int j=0;j<9;j++){
            if( j>=4-i && j<=4+i){
                printf("%c ",ch);
                j>3?ch--:ch++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}