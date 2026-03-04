#include<stdio.h>

int main(){
    int a[7]={4, 5, 4, 6, 6, 7, 8};
    int size=7;
    for(int i=0;i<size;i++){
       int freq=1;
       if(a[i]>0){
            for(int j=i+1;j<size;j++){
                if(a[i]==a[j]){
                    freq++;
                    a[j]=-1;
                }
            }
        }
        else{
            continue;
        }
        printf("Frequency of %d is: %d\n",a[i],freq);
    }
    
    return 0;
}