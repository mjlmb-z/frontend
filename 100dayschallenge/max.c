#include<stdio.h>
#include<string.h>
int main()
{
    int x[100],s,i, max,min;
    printf("Enter the size of the array:\t");
    scanf("%d",&s);
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\nThe elements are:\n");
    for(i=0;i<s;i++)
    {
        printf("%d\n",x[i]);
    }

    min=max=x[0];
    for(i=0;i<s;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
        if(min>x[i])
        {
            min=x[i];
        }
    }
    printf("\nMinimum and the maximum are as follows respectively:\t%d and\t%d",min,max);
    return 0;
}