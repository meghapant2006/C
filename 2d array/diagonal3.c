#include <stdio.h>
int main()
{
    int ar[3][3], i, j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    printf("The elementskm of the matrix are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", ar[i][j]);
        }
        printf("\n");
    }
    printf("The diagonal elements of the matrix are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j || (i + j) == 2)
            {
                printf("%d\t", ar[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
} 