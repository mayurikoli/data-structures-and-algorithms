#include<stdio.h>
void selection(int arr[],int limit,int loc);
int main()
{
	int limit;
	scanf("%d",&limit);
	int arr[limit];
	for(int i=0;i<limit;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<limit;i++)
	{
		selection(arr,limit,i);
	}
	for(int i=0;i<limit;i++)
	{
		printf("%d\n",arr[i]);
	}
	
}
void selection(int arr[],int limit,int loc)
{
	int d=loc;
	for(int i=loc;i<limit;i++)
	{
		if(arr[i]<arr[d])
		{
			d=i;
		}
	}
	//printf("%d\n",arr[d] );
	int temp=arr[loc];
	arr[loc]=arr[d];
	arr[d]=temp;

}