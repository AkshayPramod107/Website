#include <stdio.h>
int main()
{
    int array[5]={1,2,3,4,5}, n=5, c, t, end;
    
    end = n - 1;
    
    for (c = 0; c < n/2; c++) {
        t = array[c];
        array[c] = array[end];
        array[end] = t;    
        end--;
    }
    
    printf("Reversed array elements are:\n");
    
    for (c = 0; c < n; c++) {
        printf("%d\n", array[c]);
    }
    
    return 0;
}