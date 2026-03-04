#include <stdio.h>

int main(){
    for(int i=0;i<9;i++){
        char ch='A';
        for(int j=0;j<9;j++){
            if(i<5){
                if(j>=4-i && j<=4+i){
                    printf("%c ",ch++);
                }
                else{
                    printf("  ");
                }
            }
            else{
                if(j>=i-4 && j<=12-i){
                    printf("%c ",ch++);
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