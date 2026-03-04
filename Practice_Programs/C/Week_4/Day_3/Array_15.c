#include<stdio.h>

int main(){
    int a[7]={4, 5, 4, 6, 6, 7, 8};
    int size=7,count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        int freq=1;
        for(int j=0;j<size;j++){
            if(a[i]==a[j] && i!=j){
                freq++;
            }
        }
        if(freq==1){
            count++;
        }
    }
    printf("The total number of unique elements in this array is: %d",count);
    return 0;
}