#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0){
            printf("Likla");
            break;
        }
       else if(i%5==0){
            printf("Sinha");
            break;
        }
        else if (i%3==0&&i%5==0)
        {
            printf("Likla Sinha");
        }
        else
        printf("%d",i);
    }
    printf("\n");
    return 0;
}