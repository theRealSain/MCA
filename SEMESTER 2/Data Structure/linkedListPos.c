#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
} NODE;

NODE* addNode(NODE *head, int data)
{
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	if(newNode == NULL)
	{
		printf("Memory allocation failed!");
		return head;			
	}
	newNode->data = data;
	newNode->next = NULL;
	if(head == NULL)
	{
		return newNode;
	}
	NODE *temp = head;
	while(temp->next != NULL)
	{			
		temp = temp->next;
	}
	temp->next = newNode;
	return head;
}

NODE* insertAtPosition(NODE *head, int data, int loc)
{
	if (loc <= 0)
	{
		printf("Invalid position!\n");
		return head;
	}
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	if (newNode == NULL)
	{
		printf("Memory allocation failed!");
		return head;
	}
	newNode->data = data;
	if (loc == 1)
	{
		newNode->next = head;
		return newNode;
	}
	NODE *temp = head;

	for(int i = 1; i < loc - 1 && temp != NULL; i++)
	{	
		temp = temp->next;
	}
	if (temp == NULL)
	{
		printf("Position out of bounds !\n");
		return head;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return head;
}

NODE* deleteAtPosition(NODE *head, int loc)
{
	NODE *current = head;
	NODE *previous = NULL;
	
	if(head == NULL || loc < 1)
	{
		printf("Invalid position or the list empty!\n");
		return head;
	}
	
	if(loc == 1)
	{
		head = current->next;
		free(current);
		return head;
	}	
	
	int i = 1;
	while(current != NULL && i < loc)
	{
		previous = current;
		current = current->next;
		i++;
	}
	
	if(current == NULL)
	{
		printf("Invalid position!\n");
		return head;
	}
	
	previous->next = current->next;
	free(current);
	return head;
}

void displayList(NODE *head)
{
	NODE *temp = head; 
	while( temp != NULL)
	{	
		printf("[ %d ] -> ", temp->data);
		temp = temp->next;		
	}
	printf("[ NULL ]\n");
}

int main()
{
	NODE *head = NULL;
	printf("Linked List Implementation(Insertion and deletion at a position) \n\n");
	printf("1. Add a node (Append))\n");
	printf("2. Insert at a position\n");
	printf("3. Delete from a position\n");
	printf("4. Display\n");
	printf("5. Exit\n");
	
	int loc, data, n;
	char ch;
	
	do
	{
		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
			{
				printf("Enter item to add: ");
				scanf("%d", &data);
				head = addNode(head, data);
				if(head == NULL)
				{
					printf("Node adding failed!\n");
				}
				printf("\n");
				displayList(head);
				break;				
			}
			
			case 2:
			{
				printf("Enter a position to add the node: ");
				scanf("%d", &loc);
				printf("Enter the data: ");
				scanf("%d", &data);
				head = insertAtPosition(head, data, loc);
				printf("\n");
				displayList(head);
				break;
			}
			
			case 3:
			{
				printf("Enter a position to delete the node: ");
				scanf("%d", &loc);
				head = deleteAtPosition(head, loc);
				printf("\n");
				displayList(head);
				break;
			}
			
			case 4:
			{
				printf("Displaying...\n");
				displayList(head);
				break;
			}
			
			case 5:
			{
				printf("Exiting!\n");
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
	while(ch != 5);
	
	NODE *temp;
	while(head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	
	return 0;
}