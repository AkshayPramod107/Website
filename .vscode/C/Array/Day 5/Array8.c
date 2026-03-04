#include<stdio.h>

int main(){
    int a[7]={10, 7, 13, 18, 11, 20, 9};
    int size=7,even_count=0,prime_count=0;
    for(int i=0;i<size;i++){
        int flag=0;
        int n=a[i];
        if(a[i]%2==0){
            even_count++;
        }
        else{
            if(a[i]==0 || a[i]==1){
                flag=1;
            }
            else{
                for(int j=2;j<=n/2;j++){
                    if(a[i]%j==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    prime_count++;
                }
            }
        }
    }
    printf("The even number count: %d",even_count);
    printf("\nThe prime number count: %d",prime_count);
    return 0;
}