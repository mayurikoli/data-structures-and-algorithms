#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node *front, *rare, *temp;

void Enqueue(int new)
{
	if(front == NULL)
	{
		temp = (struct node*)malloc(sizeof(struct node));
		front = temp;
		rare = temp;
		temp -> data = new;
		temp -> next = NULL;
	}
	else
	{
		temp = (struct node*)malloc(sizeof(struct node));
		temp -> data = new;
		rare->next = temp;
		rare = temp;
		rare -> next = NULL;
	}
}

int Dequeue()
{
	int t = 999;
	if(front == NULL)
		printf("Queue is empty\n");
	else
	{
		t = front->data;
		temp = front;
		front = front -> next;
		free(temp);

		if(front == NULL)
			rare = NULL;
	}
	return t;
}

void disp()
{
	temp = front;
	while(temp != NULL)
	{
		printf("%d  ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	int ch,x;
	front = NULL;
	rare = NULL;

	printf("1:Enq\n2:deq\n3:disp\n4:exit\n");
	while(1)
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
				printf("Enter value:");
				scanf("%d",&x);
				Enqueue(x);
				break;
			case 2:
				x = Dequeue();
				if(x!=999)
					printf("Dequeued value = %d\n",x);
				break;
			case 3: disp();break;
			case 4: exit(0);
			default: printf("Invalid\n");
		}


	}

	return 0;
}
