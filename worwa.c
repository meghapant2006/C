// without return type and with argument
#include <stdio.h>

int sum(int , int );
int main()
{
    int a, b;
    printf("enter a and b");
    scanf("%d %d", &a, &b);
    sum(a, b);
}
int sum(int a, int b)
{
    int s = a + b;
    printf("addition is %d",s);
}

