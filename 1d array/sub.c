#include<stdio.h>
int main()
{
    int ar[5],i,sub=0;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
        sub-=ar[i];
    }
    printf("diference of 5 numbers is: %d",sub);
    return 0;
}