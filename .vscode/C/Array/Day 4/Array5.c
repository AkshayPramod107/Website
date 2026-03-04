#include<stdio.h>

int main(){
    int a[7]= {4, 5, 4, 6, 6, 7, 8};
    int size=7,temp,count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int k=0;k<size;k++){
        int flag=0;
        for(int l=0;l<size;l++){
            if(a[k]==a[l] && k!=l){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }
    printf("sorted array:\n");
    for(int j=0;j<size;j++){
      printf("%d  ",a[j]);
    }
    printf("\nTotal count of unique elements: %d",count);
    return 0;
}