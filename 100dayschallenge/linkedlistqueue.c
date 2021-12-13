#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *front=NULL, *rear=NULL;
};

void insert(int x);
void delete();
void display();

void insert(int x){
    struct node *newnode;
    newnode=(struct *node)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next= NULL;
    if(front==NULL){
        front = rear = newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    printf("\nInsertion was successful");
};
void delete(){
    if(front==NULL){
        printf("\nQueue is empty");
    }
    else{
        struct node *temp=front;
        front=front->next;
        printf("\nDeleted data:\t%d",temp->data);
        free(temp);
    }
};
void display(){
    if(front==NULL){
        printf("\nQueue is empty\n");
    }
    else{
        struct node *temp=front;
        while(temp!=0){
            printf("%d--->",temp->data);
            temp=temp->next;
        }
        printf("%d--->NULL",temp->data);
    }
};
void main()
{
   int choice, x;
   printf("\n:: Queue Implementation using Linked List ::\n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &x);
		 insert(x);
		 break;
	 case 2: delete(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}