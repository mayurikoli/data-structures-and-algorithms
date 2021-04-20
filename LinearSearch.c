#include<stdio.h>
int A[10]={1,2,3,4,5,6,7,8,9,10};
int LB=0,UB=9;

int search(int key);
int main()
{
	int loc;
	loc=search(5);
	if(loc>=0)
		printf("Value present at %d\n",loc);
	else
		printf("Value not found\n");
	return 0;
}


int search(int key)
{
	int i;

	for(i=LB;i<=UB;i++)
	{
		if(key==A[i])

		{
			printf("Found at %d\n",i);
			return i;
		}	
	}
	return -1;
}

