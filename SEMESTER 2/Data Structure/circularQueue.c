#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int FRONT = -1, REAR = -1;
int item;

void enqueue(int item)
{
	if((REAR + 1) % MAX == FRONT)
	{
		printf("Queue is Full!\n");
		return;
	}
	if(FRONT == -1 && REAR == -1)
	{
		FRONT = REAR = 0;
	}
	else
	{
		REAR = (REAR + 1) % MAX;
	}
	queue[REAR] = item;
}

int dequeue()
{
	if(FRONT == -1)
	{
		printf("Queue Underflow!\n");
		return -1;
	}
	item = queue[FRONT];
	if(FRONT == REAR)
	{
		FRONT = -1;
		REAR = -1;
	}
	else
	{
		FRONT = (FRONT + 1) % MAX;
	}
	return item;
}

void display()
{
	int i;
	if(FRONT == -1)
	{
		printf("Queue is Empty!\n");
		return;
	}	
	
	if(FRONT > REAR)
	{
		for(i=0; i<=REAR; i++)
		{
			printf(" %d |", queue[i]);
		}
		
		for(i=FRONT; i<=MAX-1; i++)
		{
			printf(" %d |", queue[i]);
		}
		printf("\n");
	}
	else
	{
		for(i=FRONT; i!=REAR; i=(i+1)%MAX)
		{
			printf(" %d |", queue[i]);
		}
		printf(" %d\n", queue[i]);
	}
}

int main()
{
	printf("Circular Queue Implementation using arrays\n\n");
	printf("1. Enquque\n");
	printf("2. Dequeue\n");
	printf("3. Display\n");
	printf("4. Exit\n");

	int ch;
	do
	{
		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
			{
				printf("Enter item to add to queue: ");
				scanf("%d", &item);
				enqueue(item);
				printf("\n");
				display();
				break;
			}

			case 2:
			{
				item = dequeue();
				printf("%d removed!\n", item);
				printf("\n");
				display();
				break;
			}
		
			case 3:
			{
				printf("Displaying...\n");
				display();
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
	return 0;
}
