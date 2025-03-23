#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *p, *q;
    int a,b;
    p=&a;
    q=&b;
    printf("the numbers are:-");
    scanf("%d %d",p,q);
    printf("sum=%d",(*p+*q));
    return 0;
}
