#include<stdio.h>

int main(){
    int num=1;
    char ch='A';
    for(int i=1;i<=5;i++){
        int rep=i>1?2:1;
        for(int j=1;j<=rep;j++){
            for(int k=1;k<=i;k++){
                j%2==1&&i>1?printf("%d ",num):printf("%c ",ch++);
            }
            printf("\n");
        }
        if(i>1)
            num++;
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