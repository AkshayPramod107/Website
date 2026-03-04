#include<stdio.h>

int main(){
    int a[6]= {10, 15, 10, 20, 15, 30};
    int size=6,sum=0,count=0;
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=0;j<size;j++){
            if(a[i]==a[j] && i!=j){
                flag=1;
                break;
            }
        }
        if(flag==0){
            sum+=a[i];
            count++;
        }
    }
    printf("The average is: %d",sum/count);
    return 0;
}