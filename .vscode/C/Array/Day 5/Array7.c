#include<stdio.h>

int main(){
  int a[7]={12, 7, 18, 9, 24, 11, 30},even[5],odd[5];
  int size=7,even_index=0,odd_index=0;
  for(int i=0;i<size;i++){
    if(a[i]%2==0){
      even[even_index]=a[i];
      even_index++;
    }
    else{
      odd[odd_index]=a[i];
      odd_index++;
    }
  }
  printf("Even array:");
  for(int j=0;j<even_index;j++){
    printf("%d  ",even[j]);
  }
  printf("\n\nOdd index:");
  for(int j=0;j<odd_index;j++){
    printf("%d  ",odd[j]);
  }
  return 0;
}