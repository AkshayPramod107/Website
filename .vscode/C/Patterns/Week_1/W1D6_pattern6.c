#include<stdio.h>

int main(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(i<5){
                if(j<=i || j>=8-i){
                    printf("* ");
                }
                else
                    printf("  ");
            }
            else{
                if(j<=8-i || j>=i){
                    printf("* ");
                }
                else
                    printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}


// i 1 j   <=1    >=7
// i 2 j   <=2    >=6
// i 3 j   <=3    >=5
// i 4 j   <=4    >=4


// i 5 j   <=3    >=5
// i 6 j   <=2    >=6 
// i 7 j   <=1    >=7