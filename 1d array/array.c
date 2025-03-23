#include<stdio.h>
int main()
{
    int ar[5];
    int i;
    printf("enter the array elements\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("array elements are\n");
    for(i=0; i<5; i++)
    {
        printf("%d\n", ar[i]);
    }

    return 0;
}