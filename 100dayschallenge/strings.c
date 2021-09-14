#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("\nEnter your name:\t");
    gets(s1);
    printf("\nYour name is %s",s1);

    
    strcpy(s2,s1);
    printf("\n\nThe copied string:\t%s",s2);

    strrev(s1);
    printf("\n\nThe string after reversing:\t%s",s1);

    int l=strlen(s1);
    printf("\n\nThe length of the string is:\t%d",l);
    return 0;

}