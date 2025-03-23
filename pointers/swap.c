#include <stdio.h>
#include <stdlib.h>
int swap(int *, int *);
int main()
{
    int a, b;
    a = 20;
    b = 30;
    swap(&a,&b);
    printf("a=%d\t b=%d",a,b);
    return 0;
}
int swap(int*p,int*q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}

