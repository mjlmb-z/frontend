#include<stdio.h>
int main()
{
    int a,n,s,r;
    printf("Enter a number:\t");
    scanf("%d",&a);
    for(s=0;r>0;r=r/10){
        n=a%10;
        s=s*10+n;
    }
    printf("\nReverse of the guven number is:\t%d",s);
}