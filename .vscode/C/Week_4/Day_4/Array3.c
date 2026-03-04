#include<stdio.h>

int main(){
    int a[7]={10, 15, 8, 21, 30, 9, 12};
    int size=7,sum=0;
    for(int i=0;i<size;i++){
        if(a[i]%2==0){
            for(int j=i;j<size-1;j++){
                a[j]=a[j+1];
            }
            size--;
            i--;
        }
        else{
            sum+=a[i];
        }
    }
    printf("The average is: %d",sum/size);
    return 0;
}