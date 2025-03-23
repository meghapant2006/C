// with return type without argument
# include<stdio.h>
int sum();
int main()
{ 
    int z;

    z= sum();
    printf("total is %d",z);
    return 0;
}
 int sum()
 {
    int a,b,s;
    printf("enter the 1st no ");
    scanf("%d",&a);
    printf("enter the 2nd no ");
    scanf("%d",&b);
  s= a+b;
  return s;
 }
       


 