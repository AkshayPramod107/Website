#include<stdio.h>

int main(){
    int a[]={10,20,30,40,50};
    int size=5;
    for(int i=size;i>=0;i--){
        a[i]=a[i-1];
    }
    printf("Enter the element to be inserted at the beginning:");
    scanf("%d",&a[0]);
    for(int i=0;i<size+1;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}