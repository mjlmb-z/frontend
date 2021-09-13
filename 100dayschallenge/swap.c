#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two numbers:\t");
    scanf("%d%d",&a,&b);
    printf("\nValue before swapping:\t%d\t%d",a,b);

    t=a;
    a=b;
    b=t;
    printf("\nValue before swapping:\t%d\t%d",a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nOriginal value of the variables:\t%d\t%d",a,b);
    return 0;
}