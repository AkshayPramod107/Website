#include<stdio.h>

int main(){
    int a[5]={10,20,30,40,50},sum=0,avg,count=0;
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    avg=sum/5;
    for(int j=0;j<5;j++){
        if(a[j]>avg){
           count++; 
        }
    }
    printf("There are %d elements higher than the average:%d",count,avg);
    return 0;
}