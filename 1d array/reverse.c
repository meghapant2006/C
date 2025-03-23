#include <stdio.h>

int main()
{
    int i;
    int arr[5];
    printf("Enter 5 numbers:\n");
    for (i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for (i=5-1; i>=0; i--)
    {
        printf("%d",arr[i]);
    }

    printf("\n");
    return 0;
}