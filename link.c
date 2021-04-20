#include<stdio.h>
#include<stdlib.h>
void insertAtbeg();
void insertAtend();
void insertAtspecific(int d);
void deleteAtbeg();
void deleteAtend();
void deleteAtspecific(int d);
void dispay();
void rev();
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
int main()
{
	
	int i = 1,op,d;
	while(i)
	{
		printf("\n");
		printf("*******************************************************\n");
		printf("1:insert at beg\n2:insert at end\n3:insert at specific\n4:delete at beg\n5:delete at end\n6:delete at specific\n7:exit\n8:dispay\n9:rev\n");
		printf("enter option:\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:insertAtbeg();
			break;
			case 2:insertAtend();
			break;
			case 3:
			
			scanf("%d",&d);
			insertAtspecific(d);
			break;
			case 4:deleteAtbeg();
			break;
			case 5:deleteAtend();
			break;
			case 6:
			scanf("%d",&d);
			deleteAtspecific(d);

			break;
			case 7:
			i=0;
			break;
			case 8:dispay();
			break;
			case 9:rev();
			break;
		}

	}
}
void rev()
{
	struct node *pre=NULL;
	struct node *curr=head;
	struct node *next=NULL;
	while(curr!=NULL)
	{
		next=curr->next;
		curr->next=pre;
		pre=curr;
		curr=next;
	}
	head=pre;
}
void insertAtbeg()
{
	int itam;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&itam);
	ptr->data=itam;
	if(head==NULL)
	{
		ptr->next=NULL;
		head=ptr;

	}
	else
	{
		ptr->next=head;
		head=ptr;
	}
}
void insertAtend()
{
	int itam;
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&itam);
	ptr->data=itam;
	if(head==NULL)
	{
		ptr->next=NULL;
		head=ptr;
	}
	else
	if(head->next==NULL)
	{
		ptr->next=NULL;
		head->next=ptr;
	}
	else
	{
		struct node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		ptr->next=NULL;
		temp->next=ptr;
	}

}

void insertAtspecific(int d)
{
	struct node *temp=head;
	struct node *temp1=head;
	int ct = 0;
	while(temp->next!=NULL)
	{
		if(temp->data==d)
		{
			int item;
			scanf("%d",&item);
			struct node *ptr=(struct node*)malloc(sizeof(struct node));
			ptr->data=item;
			ptr->next=temp1->next;
			temp1->next=ptr;
			ct=1;


		}
		temp1=temp;
		temp=temp->next;
	}
	if(ct==0)
	{
		printf("item element is not presemt\n");
	}

}
void deleteAtbeg()
{
	if(head==NULL)
	{
		printf("list underflow...!\n");
	}
	else
	if(head->next==NULL)
	{
		struct node *temp;
		temp=head;
		head=NULL;
		free(temp);
	}
	else
	{
		struct node *temp=head;
		head=head->next;
		free(temp);
	}

}
void deleteAtend()
{
	if(head==NULL)
	{
		printf("list underflow...!\n");
	}
	else
	if(head->next==NULL)
	{
		struct node *temp=head;
		head=NULL;
		free(temp);
	}
	else
	{
		struct node *temp=head;
		struct node *temp1=head;
		while(temp->next!=NULL)
		{
			temp1=temp;
			temp=temp->next;
		}
		temp1->next=NULL;
		free(temp);
	}
}
void deleteAtspecific(int d)
{
	struct node *temp=head;
	struct node *temp1=head;
	int ct=0;
	while(temp->next!=NULL)
	{
		if(temp->data==d)
		{
			ct=1;
			temp1->next=temp->next;
			free(temp);
			break;
		}
		temp1=temp;
		temp=temp->next;


	}
	if(ct==0)
		{
			printf("not present...!\n");
		}
}
void dispay()
{
	if(head==NULL)
	{
		printf("list is empty......!\n");
	}
	else
	{
		struct node *temp=head;
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}

	}
}