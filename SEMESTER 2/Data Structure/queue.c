#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int FRONT = -1, REAR = -1;
int QUEUE[MAX];

int enqueue(int item)
{
	if(REAR == MAX - 1 )
	{
		printf("Queue Overflow!\n");
		return 0;
	}
	else if(FRONT == -1 && REAR == -1)
	{
		FRONT = REAR = 0;
	}
	else
	{
		REAR++;
	}
	QUEUE[REAR] = item;
	printf("%d added to queue!\n", item);
}

int dequeue()
{
	if(FRONT == -1 && REAR == -1)
	{
		printf("Queue Underflow!");
		return 0;
	}
	int item = QUEUE[FRONT];
	if(FRONT == REAR)
	{
		FRONT = REAR = -1;
	}
	else
	{
		FRONT++;
	}
	printf("%d removed from queue!\n", item);	
}

void display()
{
	if(FRONT == -1 && REAR == -1)
	{
		printf("Queue is empty!\n");
	}
	else
	{	
		for(int i=FRONT; i<=REAR; i++)
		{
			printf("| %d ", QUEUE[i]);
		}
		printf("|\n");
	}
}

int main()
{
	printf("Queue Implementation using arrays\n\n");
	printf("1. Enquque\n");
	printf("2. Dequeue\n");
	printf("3. Display\n");
	printf("4. Exit\n");

	int ch, item;
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
				dequeue();
				printf("\n");
				display();
				break;
			}
		
			case 3:
			{
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
