#include<stdio.h>
int main()
{
    int ar[5],i;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Numbers in ascending order: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}