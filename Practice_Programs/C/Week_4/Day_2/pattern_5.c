#include <stdio.h>

int main(){
    for(int i=0;i<5;i++){
        int ch='A';
        for(int j=0;j<5;j++){
            if( i==j || i+j==4)
            printf("%c ",ch);
            else
            printf("  ");
        ch++;
        }
        
        printf("\n");
    }
}