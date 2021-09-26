#include<stdio.h>
#define SIZE 5

void push();
void pop();
void display();
int full();
int empty();
int stack[SIZE],c,top,e,i;

void main()
{
	top= -1;
	
	printf("1. Push \t2. Pop \n3. Display \t4. Exit\n");
	scanf("\t>>%d",&c);
	switch(c)
	{
		case 1:
		{
			push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("\nExit");
				break;
			}
			default:
			{
				printf("\nPlease enter a valid number and try again.\n");
				break;
			}
 		
		}		
}

	int full()
	{
		if(top==SIZE-1)
		return(1);
		else 
		return(0);
	}
	
	void push()
	{
		if(full())
		{
			printf("\nStack is over flow\n");
		}
	
		else 
	   {
			printf("\nEnter an element to add in the stack:\n");
			scanf("%d",&e);
			top++;
			stack[top]=e;
		}
	}
	
	int empty()
	{
		if(top==-1)
		return(1);
		else
		return (0);
	}
	
	void pop()
	{
		if (empty())
		{
			printf("\nStack is under flow\n");
		}
		else 
		{
			printf("\nElement popped:\t%d\n",stack[top]);
			top--;
		}
	}
	
	void display()
	{
		if( empty()==1)
		{
			printf("\nStack is under flow\n");
		}
		else 
		{
			printf("\nStack elements:\t");
			for(i=top;i>=0;i--)
			{
				printf("\n%d",stack[i]);
			}
		}
	}
