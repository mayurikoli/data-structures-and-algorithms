#include<stdio.h>
void bubble(int arr[],int limit);
int main()
{
	int limit;
	scanf("%d",&limit);
	int arr[limit];
	
	for(int i=0;i<limit;i++)
	{
		scanf("%d",&arr[i] );
	}
	bubble(arr,limit);
	printf("sorted ARRAYY\n");
	
	for(int i=0;i<limit;i++)
	{
		printf("%d\n",arr[i] );
	}
}
void bubble(int arr[],int limit)
{
	for(int i=0;i<limit-1;i++)
	{
		for(int j=0;j<limit-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}