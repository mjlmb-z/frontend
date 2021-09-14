#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,i;
    char x[100];
    printf("Enter a string:\t");
    gets(x);
    for(i=0;i<strlen(x);i++)
    {
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
            c++;
        else if(x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U')
            c++;
    }
    if(c==0)
    {
        printf("\n\nThere exists  no vowels in the given string.\n\n %s",x);
    }
    else
    {
        printf("\n\nThe given string, %s , has %d vowels in it.\n\n",x,c);
    }
}