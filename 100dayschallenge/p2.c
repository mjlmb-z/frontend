#include<stdio.h>

void main()
{
    int a, b, c, s = 0;
    printf("Enter a number:\t");
    scanf("%d", &a);
    c = a;

   while(a > 0)
   {
      b = a%10;
      s = (s*10)+b;
      a = a/10;
   }
   if(s == c)
   {
      printf("\nThe number %d is a palindrome.", c);
   }
   else
   {
      printf("\nThe number %d is not a palindrome.", c);
   }
}