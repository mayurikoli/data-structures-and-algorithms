#include<stdio.h>
#include<stdlib.h>

int Q[12]={5,6,55};
int Front= 0;
int Rare= 2;
int Max = 11;

void Enqueue(int New)
{
	if(Rare == Max)
		printf("Error");
	else
	{
		Rare++;
		Q[Rare] = New;
	}
}

int Dequeue()
{
	int Temp=999;
	if(Front > Rare)
		printf("Error");
	else
	{
		Temp = Q[Front];
		Front++;		
	}
	
	return Temp;
}


void disp()
{
	int i;
	for(i=Front;i<=Rare;i++)
		printf("%d  ",Q[i]);

	printf("\n");
}

int main()
{
	int ch,X;
	printf("1:Enq\n2:Deq\n3:disp\n4:exit\n");
	while(1)
	{
		printf("Enter Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter value for Enqueue:");
				scanf("%d",&X);
				Enqueue(X);
				break;
			case 2:
				X = Dequeue();
				if(X != 999)
					printf("Dequeued value = %d\n",X);
				break;
			case 3:
				disp();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice\n");
		}
	}
	return 0;
}
