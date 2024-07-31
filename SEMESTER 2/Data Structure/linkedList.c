#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
} NODE;

NODE* prepend(NODE *head, int data)
{
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	if(newNode == NULL)
	{
		printf("Memory allocation failed!");
		return head;
	}
	newNode->data = data;
	newNode->next = head;
	return newNode;
}

NODE* append(NODE *head, int data)
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

NODE* deleteBeginning(NODE* head)
{
    if (head == NULL)
    {
        return head;
    }

    NODE* temp = head;
    head = head->next;

    free(temp);
    return head;
}

NODE* deleteEnd(NODE* head) 
{
    if (head == NULL)
    {
        return head;
    }
    
    if (head->next == NULL) 
    {
        free(head);
        return head;
    }

    NODE* temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    return head;
}

void displayList(NODE *head)
{
	NODE *temp = head;
	while(temp != NULL)
	{
		printf("[ %d ] -> ", temp->data);
		temp = temp->next;
	}
	printf("[ NULL ]\n");
}

int main()
{
	NODE *head = NULL;
	
	printf("Linked List Implementation\n\n");
	printf("1. Insert from front\n");
	printf("2. Insert from end\n");
	printf("3. Delete from front\n");
	printf("4. Delete from end\n");
	printf("5. Display\n");
	printf("6. Exit\n");
	
	int ch, data;
	do
	{
		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
			{
				printf("Enter item to prepend: ");
				scanf("%d", &data);
				head = prepend(head, data);
				if(head == NULL)
				{
					printf("prepending failed!\n");
				}
				printf("\n");
				displayList(head);
				break;				
			}
			
			case 2:
			{
				printf("Enter item to append: ");
				scanf("%d", &data);
				head = append(head, data);
				if(head == NULL)
				{				
					printf("Appending failed!\n");
				}
				printf("\n");
				displayList(head);
				break;
			}
			
			case 3:
			{
				head = deleteBeginning(head);
				printf("\n");
				displayList(head);
				break;
			}
			
			case 4:
			{
				head = deleteEnd(head);
				printf("\n");
				displayList(head);
				break;
			}
		
			case 5:
			{
				printf("Displaying...\n");
				displayList(head);
				break;
			}

			case 6:
			{
				printf("Exiting...!");
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
	while(ch != 6);
	
	NODE *temp;
	while(head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	
	return 0;
}
