#include<stdio.h>

int main(){
    int arr1[3]={10, 20, 30},arr2[3]= {20, 40, 30};
    int arr1_size=3,arr2_size=3;
    int tot_size=arr1_size+arr2_size;
    int final_array[tot_size];
    for(int i=0;i<tot_size;i++){
        if(i<arr1_size){
            final_array[i]=arr1[i];
        }
        else{
            final_array[i]=arr2[i-3];
        } 
    }
    for(int i=0;i<tot_size;i++){
        for(int j=i+1;j<tot_size;j++){
            if(final_array[i]==final_array[j]){
                for(int k=j;k<tot_size-1;k++){
                    final_array[k]=final_array[k+1];
                }
                tot_size--;
                j--;
            }
        }
    }
    for(int j=0;j<tot_size;j++){
        printf("%d ",final_array[j]);
    }
    return 0;
}