#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int TOP = -1;
int item;

int push(int item)
{
	if(TOP == MAX-1)
	{
		printf("Stack Overflow!\n");
	}
	else
	{		
		TOP = TOP + 1;
		stack[TOP] = item;
		printf("%d added to stack!\n", item);
	}
}

int pop()
{
	if(TOP == -1)
	{
		printf("Stack Underflow!");
	}
	else
	{
		item = stack[TOP];
		TOP = TOP - 1;		
		printf("%d poped from stack!\n", item);
	}
}

void traverse()
{
	if(TOP == -1)
	{
		printf("Stack is empty!\n");
	}
	else
	{		
		for(int i=TOP; i>=0; i--)
		{
			printf("| %d ", stack[i]);
		}
		printf("|\n");
	}
}

int top()
{
	printf("Top: %d\n", TOP);
}

int main()
{
	printf("Stack Using Arrays\n");
	printf("1. PUSH\n");
	printf("2. POP\n");
	printf("3. TRAVERSE\n");
	printf("4. TOP\n");
	printf("5. EXIT\n");
	
	
	
	int choice;
	do
	{		
		printf("\nEnter a choice: ");
		scanf("%d", &choice);
	
		switch(choice)
		{
			case 1: 
			{
				printf("Enter item to push: ");
				scanf("%d", &item);
				push(item);
				printf("\n");
				traverse();
				break;
			}
			
			case 2:
			{
				pop();
				printf("\n");
				traverse();
				break;
			}
				
			case 3:
			{
				printf("Displaying...\n");
				traverse();
				break;
			}
						
			case 4:
			{
				top();
				break;
			}
			
			case 5: 
			{
				printf("Exiting...!");
				exit(1);
			}
			
			default: 
			{
				printf("Invalid!\n");
				break;
			}
		}
	}
	while(choice != 5);
	
	
	return 0;
}
