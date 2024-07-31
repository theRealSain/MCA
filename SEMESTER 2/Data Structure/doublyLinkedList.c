#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} NODE;

NODE* prepend(NODE *head, int data)
{
    NODE *newNode = (NODE*)malloc(sizeof(NODE));
    if (newNode == NULL) 
    {
        printf("Memory allocation failed!");
        return head;
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL) 
    {
        head->prev = newNode;
    }
    return newNode;
}

NODE* append(NODE *head, int data)
{
    NODE *newNode = (NODE*)malloc(sizeof(NODE));
    if (newNode == NULL) 
    {
        printf("Memory allocation failed!");
        return head;
    }
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        newNode->prev = NULL;
        return newNode;
    }
    NODE *temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

NODE* insertAtPosition(NODE *head, int data, int position) 
{
    if (position < 1)
	{
        printf("Invalid position!\n");
        return head;
    }
    NODE *newNode = (NODE*)malloc(sizeof(NODE));
    if (newNode == NULL)
	{
        printf("Memory allocation failed!");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (head == NULL)
	{
        if (position == 1)
		{
            return newNode;
        }
		else
		{
            printf("Invalid position!\n");
            return head;
        }
    }
    if (position == 1)
	{
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
    NODE *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
	{
        temp = temp->next;
    }
    if (temp == NULL)
	{
        printf("Position out of bounds!\n");
        return head;
    }
    newNode->next = temp->next;
    if (temp->next != NULL)
	{
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

NODE* deleteBeginning(NODE *head)
{
    if (head == NULL) 
    {
        printf("List is empty. Nothing to delete.\n");
        return NULL;
    }
    NODE *temp = head;
    head = head->next;
    if (head != NULL) 
    {
        head->prev = NULL;
    }
    free(temp);
    return head;
}

NODE* deleteEnd(NODE *head)
{
    if (head == NULL) 
    {
        printf("List is empty. Nothing to delete.\n");
        return NULL;
    }
    NODE *temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    if (temp->prev != NULL) 
    {
        temp->prev->next = NULL;
    } 
    else 
    {
        head = NULL;
    }
    free(temp);
    return head;
}

NODE* deleteAtPosition(NODE *head, int position)
{
    if (head == NULL || position < 1)
	{
        printf("Invalid position or list is empty!\n");
        return head;
    }
    NODE *temp = head;
    if (position == 1)
	{
        head = head->next;
        if (head != NULL)
		{
            head->prev = NULL;
        }
        free(temp);
        return head;
    }
    for (int i = 1; i < position && temp != NULL; i++)
	{
        temp = temp->next;
    }
    if (temp == NULL)
	{
        printf("Position out of bounds!\n");
        return head;
    }
    if (temp->next != NULL)
	{
        temp->next->prev = temp->prev;
    }
    temp->prev->next = temp->next;
    free(temp);
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
    	
	printf("Doubly Linked List Implementation\n\n");
	printf("1. Insert from front\n");
	printf("2. Insert from end\n");
	printf("3. Insert at a position\n");
	printf("4. Delete from front\n");
	printf("5. Delete from end\n");
	printf("6. Delete at a position\n");
	printf("7. Display\n");
	printf("8. Exit\n");
	
	int ch, data, loc;
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
					printf("Prepending failed!\n");
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
				printf("Enter a position to add the node: ");
				scanf("%d", &loc);
				printf("Enter the data: ");
				scanf("%d", &data);
				head = insertAtPosition(head, data, loc);
				printf("\n");
				displayList(head);
				break;
			}
			
			case 4:
			{
				head = deleteBeginning(head);
				printf("\n");
				displayList(head);
				break;
			}
			
			case 5:
			{
				head = deleteEnd(head);
				printf("\n");
				displayList(head);
				break;
			}

			case 6:
			{
				printf("Enter a position to delete the node: ");
				scanf("%d", &loc);
				head = deleteAtPosition(head, loc);
				printf("\n");
				displayList(head);
				break;
			}
		
			case 7:
			{
				printf("Displaying...\n");
				displayList(head);
				break;
			}

			case 8:
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
	while(ch != 8);
	
	NODE *temp;
	while(head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
    	return 0;
}