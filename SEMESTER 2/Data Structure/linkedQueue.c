#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} NODE;

NODE *front = NULL;
NODE *rear = NULL;

void enqueue(int data)
{
	NODE *newNode = (NODE*)malloc(sizeof(NODE));
	newNode->data = data;
	newNode->next = NULL;
	
	if(rear == NULL)
	{
		front = rear = newNode;
	}
	else
	{
		rear->next = newNode;
		rear = newNode;
	}
}

int dequeue()
{
	if(front == NULL)
	{
		printf("Queue Underflow!\n");
		return -1;
	}
	
	NODE *temp = front;
	int data = temp->data;
	front = front->next;
	
	if(front == NULL)
	{
		rear = NULL;
	}
	free(temp);
	return data;
}

void displayQueue()
{
	if(front == NULL)
	{
		printf("Queue is empty!\n");
		return;
	}
	
	NODE *temp = front;
	while(temp != NULL)
	{
		printf("[%d]", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{	
	int ch, data;
	
	printf("Queue using Linked List\n\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
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
				printf("Enter item to enqueue: ");
				scanf("%d", &data);
				enqueue(data);
				printf("\n");
				displayQueue();
				break;				
			}
			
			case 2:
			{
				int data = dequeue();
				printf("%d removed!\n", data);
				printf("\n");
				displayQueue();
				break;
			}			
		
			case 3:
			{
				printf("Displaying...\n");
				displayQueue();
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
		
	while(front != NULL)
	{
		NODE *temp = front;
		front = front->next;
		free(temp);
	}
	rear = NULL;
	
	return 0;
}
