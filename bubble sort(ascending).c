/* buble sort program*/
#include<stdio.h>

int main()
{

int x,y,i,j,k,pass=0,count=0,temp=0;

printf("\nEnter the no of elements of unsorted array:");
scanf("%d",&x);

y=x; //without making the last index empty for '\0' gives a garbage value because
x+1; //the printing loop checkes to the index and their no any int is stored nor 
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

for(i=0;i<(y-1);i++)
/*{
	for(j=0;j<y-i-1;j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp =arr[j+1];
			arr[j+1]= arr[j];
			arr[j]=temp;
		}
	}
}*/
{
	j=0;
	while(j<(y-i-1))
	{
	/*if(j>=y)
	{
			break;
	}*/
	temp=arr[j+1];
	

	
	if(temp<arr[j])
	{
		arr[j+1]=arr[j];
		arr[j]=temp;
		
	}
	j++;
	count++;
}
pass++;
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

printf("\nThe passes executed are:%d",pass);
printf("\nThe total no of comparision:%d",count);

return 0;	
}
