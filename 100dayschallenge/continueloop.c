#include<stdio.h>
int  main()
{
    int i;
    for(i=0;i<10;i++){
        if(i%2==0){
            continue;
        }
        printf("\n%d",i);
    }
    //goto
    printf("\nstatement 1.");
    goto a;
    printf("\nstatement 2.");
    printf("\nstatement 3.");
        a:
    printf("\nstatement 4.");

}