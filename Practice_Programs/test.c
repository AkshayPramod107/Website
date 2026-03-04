#include <stdio.h>

int main() {
    int arr[9] = {6, 10, 8, 15, 12, 7, 18, 20};
    int size = 9;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 4 == 0){
            int del = 0;
            for (int j=0; j < 3 && i + 1 < size; j++) {
                for (int k = i + 1; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
            }
        }
    }
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}