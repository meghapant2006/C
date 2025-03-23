// with return type and with argument
#include<stdio.h>

int sum (int , int);
int main()
{
    int a,b,z;
    printf("enter 1st num");
    scanf("%d",&a);
    printf("enter 2nd num");
    scanf("%d",&b);

    z=a+b;
    printf("total is %d",z);
    return 0;
}
int sum(int x , int y)
{
  int s = x+y;
  return (s);
}