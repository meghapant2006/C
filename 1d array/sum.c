#include<stdio.h>
int main()
{
    int ar[5],i,sum=0;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    printf("Sum of 5 numbers is: %d",sum);
    return 0;
}