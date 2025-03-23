#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5];
    int i;
    printf(" enter array elemennts\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("reverse array is \n");
    for (i=4 ; i>=0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}