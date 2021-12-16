#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}
struct node *front=NULL;
struct node *rear=NULL;

void insert(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL){
        front=rear= newnode;
    }
    else(
        rear->next=newnode;
        rear=newnode;
    )

}