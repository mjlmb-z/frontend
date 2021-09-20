#include<stdio.h>
int main()
{
    int i, sum=0,s;
    printf("\nEnter the size of the array:\t");
    scanf("%d",&s);
    int x[s];
    printf("\nEnter %d elements:\n",s);
    for(i=0;i<s;++i)
    {
        scanf("%d\n",&x[i]);
        sum=sum+x[i];
    }
    printf("\nSum of the elements in the array:\t%d",sum);
}