// without returntype and without argument
#include<stdio.h>
int sum(); 
int main()
{
    sum();
    return 0 ;
}
int sum()
{
    int a,b,s;
    printf("enter 1st num");
    scanf("%d",&a);
    printf("enter 2nd num");
    scanf("%d",&b);

    s=a+b;
    printf("total is %d",s);
}
