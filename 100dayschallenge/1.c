//ascending
#include<stdio.h>
#include<string.h>
int main()
{
    int x[100],s,i,j,t;
    printf("\n\nEnter the size of the array:\t");
    scanf("%d",&s);
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<s;i++)
    {
        scanf("\n%d",&x[i]);
    }
    for(i=0;i<s;i++)
    {
        for(j=i+1;i<s;j++)
        {
            if(x[i]>x[j]){
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
    return 0;
}