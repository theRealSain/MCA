#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} NODE;

NODE* push(NODE *TOP, int data)
{
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	if(newNode == NULL)
	{
		printf("Memory allocation failed!");
		return TOP;
	}
	newNode->data = data;
	newNode->next = TOP;
	return newNode;
}

NODE* pop(NODE *TOP, int *popedData)
{
	if(TOP == NULL)
	{
		printf("Stack Underflow!");
		*popedData = -1;
		return TOP;
	}
	NODE *temp = TOP;
	*popedData = temp->data;
	TOP = TOP->next;
	free(temp);
	return TOP;
}

void displayStack(NODE *TOP)
{
	if(TOP == NULL)
	{
		printf("Stack is empty!\n");
		return;
	}
	NODE *temp = TOP;
	while(temp != NULL)
	{
		printf("[%d]", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	NODE *TOP = NULL;
	
	int ch, data;
	
	printf("Stack using Linked List\n\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Display\n");
	printf("4. Exit\n");
	
	do
	{
		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
			{
				printf("Enter item to push: ");
				scanf("%d", &data);
				TOP = push(TOP, data);
				printf("\n");
				displayStack(TOP);
				break;				
			}
			
			case 2:
			{
				data = -1;
				TOP = pop(TOP, &data);
				if(data != -1)
				{
					printf("Poped %d from Stack!\n", data);
				}
				printf("\n");
				displayStack(TOP);
				break;
			}			
		
			case 3:
			{
				printf("Displaying...\n");
				displayStack(TOP);
				break;
			}

			case 4:
			{
				printf("Exiting...!\n");
				exit(0);
				break;         
			}

			default:
			{
				printf("Invalid!\n");
				break;
			}
		}
	}
	while(ch != 4);
		
	while(TOP != NULL)
	{
		NODE *temp = TOP;
		TOP = TOP->next;
		free(temp);
	}
	
	return 0;
}
