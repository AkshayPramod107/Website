#include<stdio.h>

int main(){
    char ch='A';
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if( i==j || i+j==8){
                if(j%2==0){
                    printf("%c ",ch);
                }
                else
                    printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        if(i%2==0)
            i<4?ch++:ch--;
    }
    
    return 0;
}