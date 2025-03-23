#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int *p,*q;
    p=(int *) malloc (sizeof (int));
    q=(int *) malloc (sizeof (int));
    printf("the numbers are:-");
    scanf("%d %d",p,q);
    printf("sum=%d",(*p+*q));
    return 0;
} 
