#include<stdio.h>
int main()
{
    int ar[5],i,mul=1;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
        mul*=ar[i];
    }
    printf("Product of 5 numbers is: %d",mul);
    return 0;
}