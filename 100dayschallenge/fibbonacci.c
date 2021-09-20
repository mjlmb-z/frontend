#include<stdio.h>
int main()
{
    int n,c,a=0,b=1,t;
    printf("Enter the place until wehre you'd like the series:\t");
    scanf("%d",&n);
    printf("\n\n%d\t%d",a,b);
    for(int i=0;i<(n-2);i++){
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    return 0;
}