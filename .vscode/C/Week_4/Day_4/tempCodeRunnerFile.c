 if(a[i]<0){
            for(int k=i;k<size-1;k++){
                a[k]=a[k+1];
            }
            size--;
            i--;
        }