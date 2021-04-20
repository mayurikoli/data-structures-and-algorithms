#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void dispay();
int top=-1;
int st[20];
int main()
{
	int op,i=1;
	while(i)
	{
		printf("\n");
		printf("***************************************************************\n");
		printf("1:push\n2:pop\n3:dispay:\n4:exit\n");
		printf("Enter option:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			dispay();
			break;
			case 4:
			i=0;
			break;
		}
	}
}
void push()
{
	int data;
	printf("enter number:");
	scanf("%d",&data);
	top=top+1;
	st[top]=data;
}
void pop()
{
	top=top-1;
}

void dispay()
{

	for (int i = 0; i <= top; ++i)
	{
		printf("%d\n", st[i]);
	}
}