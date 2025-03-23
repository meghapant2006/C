#include <stdio.h>

int main() {
    int i, min;
int arr[5];
 printf("enter the array elements\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
 for (i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
 printf("The minimum value in the array is: %d\n", min);

    return 0;
}