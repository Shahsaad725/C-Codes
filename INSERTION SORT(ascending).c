/* insertion sort program*/
#include<stdio.h>

int main()
{

int x,y,i,j,k,temp=0;

printf("\nEnter the no of elements of unsorted array:");
scanf("%d",&x);

y=x; //without making the last index empty for '\0' gives a garbage value because
x++; //the printing loop checkes to the index and their no any int is stored nor 
	 //can be read.

int arr[x];

printf("\nEnter the numbers into unsorted array:\n");

for(k=0;k<y;k++)
{
	scanf("%d",&arr[k]);
}

printf("\nThe unsorted array is:{");

for(k=0;k<y;k++)
{
	printf("%d",arr[k]);
	if(k<y-1)
	{
	printf(",");
	}
}
printf("}");

for(i=1;i<y;i++)
{

	temp=arr[i];
	j=i-1; /* i doesn't decrease because first i is assigned to j and then j is decreased*/

	while((j>=0) && (arr[j]>temp))
	{
		arr[j+1]=arr[j];
		j=j-1;
	}
	arr[j+1]=temp;

}
	
	printf("\nThe sorted array is:{");
	for(k=0;k<y;k++)
{
	printf("%d",arr[k]);
		if(k<y-1)
	{
	printf(",");
	}
}
printf("}");
		
return 0;	
}
