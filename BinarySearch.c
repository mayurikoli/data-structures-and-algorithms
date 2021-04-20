#include<stdio.h>
int search(int[],int,int,int);

int main()
{
	int A[10]={11,25,34,44,49,51,64,75,88,92};
	int LB=0;
	int UB=9;
	int x,loc;
	printf("Enter Value to search:");
	scanf("%d",&x);
	loc = search(A,LB,UB,x);
	if(loc>=0)
		printf("Value present at %d\n",loc);
	else
		printf("Value not found\n");
	return 0;
}

int search(int A[],int LB,int UB,int Key)
{
	int Low,High,Mid;
	Low = LB;
	High = UB;
	while(Low<=High)
	{
		Mid = (Low + High)/2;

		if(Key > A[Mid])
			Low = Mid + 1;
		
		else if(Key < A[Mid])
			High = Mid - 1;
		
		else
			return Mid;

	}

	return -1;
}
