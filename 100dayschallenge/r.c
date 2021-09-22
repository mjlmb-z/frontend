#include<stdio.h>
int main(){
    int n,r,s,m;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for(s=0;n>0;n=n/10)
    {
        r=n%10;
        s=s*10+r;
    }
    printf("\nThe reverse of the number is:\t%d",s);
    return 0;
}