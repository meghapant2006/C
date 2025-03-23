#include <stdio.h>

int main() {
    int i, max;
int arr[5];
 printf("enter the array elements\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
 for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
 printf("The maximum value in the array is: %d\n", max);

    return 0;
}