#include<stdio.h>
int main()
{
    int ar[10]={1,12,2,322,32,45,87,321,564,456},i;
    int n=10;
    int x;
    int found=0;
    printf("Enter a number to find: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(ar[i]==x)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Number found at position %d",i+1);
    }
    else
    {
        printf("Number not found");
    }
}

