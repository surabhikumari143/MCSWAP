#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers a & b :");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Reverse number is %d & %d",a,b);
}
