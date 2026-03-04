#include <stdio.h>

int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            int str=j<6?j:10-j;
            if(i==j || i+j==10)
                printf("%d ",str);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}


// i=1 j=0
// i=2 j=4,5
// i=3 j=3,4,5,6
// i=4 j=2,3,4,5,6,7

// j=1 num=1
// j=2 num 2
// j 3 num 3
// j 4 num 4
// j 5 num 9-j
// j 6 num 8-j
// j 7 num 2
// j 8 num 1