#include<stdio.h>

int main(){
    int num=1;
    char ch='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
        if(i==5){
            break;
        }
        for(int k=1;k<=i+1;k++){
            printf("%d ",num);
        }
        printf("\n");
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