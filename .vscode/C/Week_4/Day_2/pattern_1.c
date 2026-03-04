#include <stdio.h>

int main(){
    for(int i=0;i<9;i++){
        int num=1;
        for(int j=0;j<9;j++){
            if(i>=5){
                if(j>=i-4 && j<=12-i){
                    printf("%d ",num);
                    j>3?num--:num++;
                }
                else
                    printf("  ");
            }
            else{
                if(j>=4-i && j<=4+i){
                    printf("%d ",num);
                    j>3?num--:num++;
                }
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
}


// i=0  j>=4-i or <=4+i
// i=1  j>=3 or <=5
// i=2  j=2,3,4,5,6
// 1=3  j=1,2,3,4,5,6,7
// i=4  j=0,1,2,3,4,5,6,7,8


// i=5 j=1,2,3,4,5,6,7
// i=6 j=2,3,4,5,6
// i=7 j>=i-4 <=12-i
// i=8 j=4
