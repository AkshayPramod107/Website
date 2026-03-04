#include<stdio.h>

int main(){
    int a[7]={10, 15, 8, 22, 7, 30, 12};
    int size=7,sum=0;
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    printf("The sum is : %d\n",sum);
    if(sum>100){
        for(int i=0;i<size;i++){
            if(a[i]%2==1){
                for(int j=i;j<size-1;j++){
                    a[j]=a[j+1];
                }
                size--;
                i--;
            }
        }
    }
    else{
        for(int i=0;i<size;i++){
            if(a[i]%2==0){
                for(int j=i;j<size-1;j++){
                    a[j]=a[j+1];
                }
                size--;
                i--;
            }
        }
    }
    for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
    }
    return 0;
}