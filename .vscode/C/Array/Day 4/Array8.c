#include<stdio.h>

int main(){
    int a[8]={12, 7, 18, 9, 24, 11, 9, 7},b[8]={0,0,0,0,0,0,0,0};
    int size=8;
    for(int i=0;i<size;i++){
        int freq=1;
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j] && i!=j && b[i]==0){
                b[j]=1;
                freq++;
            }
        }
        if(a[i]%2==1 && b[i]==0){
            printf("Frequency of %d is %d\n",a[i],freq);
        }
    }
    return 0;
}