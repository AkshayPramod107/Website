#include<stdio.h>

int main(){
    int a[5]={10, 20, 30, 40, 50};
    int size=5,flag=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j] && i!=j){
                flag=1;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1){
        printf("The elemnets are not unique.");
    }
    else{
        printf("The elements are unique");
    }
    return 0;
}