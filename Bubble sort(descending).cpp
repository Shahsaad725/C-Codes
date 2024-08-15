/* Bubble sort program*/
#include<stdio.h>

int main()
{

int x,i,j,k,temp=0;

printf("\nEnter the no of elements of unsorted array:");
scanf("%d",&x);

int arr[x];

printf("\nEnter the numbers into unsorted array:\n");

for(k=0;k<x;k++)
{
	scanf("%d",&arr[k]);
}

printf("\nThe unsorted array is:{");

for(k=0;k<x;k++)
{
	printf("%d",arr[k]);
	if(k<x-1)
	{
	printf(",");
	}
}
printf("}");

for(i=1;i<=x;i++)
{
	j=0;
	
	while(j<x)
	{
		temp=arr[j];
		if(temp<arr[j+1])
		{
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	j++;
	}
	
}
	
	printf("\nThe sorted array is:{");
	for(k=0;k<x;k++)
{
	printf("%d",arr[k]);
		if(k<x-1)
	{
	printf(",");
	}
}
printf("}");
		
return 0;	
}
