#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    char ch;
    do
    {
        int *p;
        p = (int *)malloc(sizeof(int));
        printf("enter number to add\n");
        scanf("%d", p);
        sum = sum + *p;
        fflush(stdin);
        printf("do u want to add anymore no:Y/N");
        scanf("%c", &ch);
    } 
    while ((ch == 'n') || (ch == 'y'));
    printf("sum=%d", sum);

    return 0;
}
