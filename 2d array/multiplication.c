#include<stdio.h>
int main()
{
    int ar1[3][3],ar2[3][3],ar3[3][3],i,j,k;            
    printf("Enter the elements of the first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar2[i][j]);
        }
    }
    printf("The elements of the first matrix are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",ar1[i][j]);
        }
        printf("\n");
    }
    printf("The elements of the second matrix are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",ar2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            ar3[i][j]=0;
            for(k=0;k<3;k++)
            {
                ar3[i][j]= ar3[i][j]+ar1[i][k]*ar2[k][j];
            }
        }
    }
    printf("The product of the two matrixs is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",ar3[i][j]);
        }
        printf("\n");
    }
}