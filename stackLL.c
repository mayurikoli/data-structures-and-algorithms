#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* Top = NULL;
struct node* p;

void push(int New)
{
	p = (struct node*)malloc(sizeof(struct node));
	p -> data = New;
	p -> next = Top;
	Top = p;
}

int pop()
{
	int T = 999;
	if(Top == NULL)
		printf("Error: Stack is EMPTY\n");
	else
	{
		T = Top->data;
		p = Top;
		Top = Top->next;
		free(p);
	}
	return T;
}

void disp()
{
	printf("Stack Contents\n");
	p = Top;
	while(p!=NULL)
	{
		printf("%d\n",p->data);
		p = p->next;
	}
}

int main()
{
	int ch,x;
	printf("1:Display\n2:Push\n3:Pop\n4:Exit\n");
	while(1)
	{
		printf("Enter Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				disp();
				break;
			case 2:
				printf("Enter value to push:");
				scanf("%d",&x);
				push(x);
				break;
			case 3:
				x = pop();
				if(x != 999)
					printf("Popped value:%d\n",x);
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice\n");
		}
	}
	return 0;
}
