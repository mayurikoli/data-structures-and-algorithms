#include<stdio.h>
#include<stdlib.h>
void sort();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node* head=NULL;
int main()
{
	int i=1;
	while(i)
	{
		printf("1:insert\n2:display\n3:exit\n");
		int op;
		scanf("%d",&op);
		switch(op)
		{
			case 1:sort();
			break;
			case 2:display();
			break;
			case 3:i=0;
			break;
		}
	}

}
void sort()
{
	struct node *p=(struct node*) malloc(sizeof(struct node));
	int d;
	scanf("%d",&d);
	p->data=d;
	p->next=NULL;
	if(head==NULL || head->data>=d)
	{
		p->next=head;
		head=p;
		return;
	}
	struct node *curr=head;
	while(curr->next!=NULL && curr->next->data<d)
	{
		curr=curr->next;
	}
	p->next=curr->next;
	curr->next=p;
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}