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

char arr[x];
int arr2[x];

printf("\nEnter the char into unsorted array:\n");

for(k=0;k<y;k++)
{
	scanf("%c",&arr[k]);
}

printf("\nThe unsorted array is:{");

for(k=0;k<y;k++)
{
	printf("%c",arr[k]);
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

	while((j>=0) && (arr2[j]>temp))
	{
		arr2[j+1]=arr2[j];
		j=j-1;
	}
	arr2[j+1]=temp;

}
	
	printf("\nThe sorted array is:{");
	for(k=0;k<y;k++)
{
	printf("%c",arr2[k]);
		if(k<y-1)
	{
	printf(",");
	}
}
printf("}");
		
return 0;	
}
