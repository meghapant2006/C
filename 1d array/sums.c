#include <stdio.h>
int main()
{
    int arr[6];
    int i, sum;
    printf(" enter array elemennts\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf ("sum of array is %d\n",sum);
    return 0;
}