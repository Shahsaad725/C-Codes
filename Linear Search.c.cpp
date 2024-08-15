/* Linear Search*/

#include<stdio.h>
#include<time.h>
int main()
{

int x,i,k,find,count=1,temp=0;

//sleep(3);

printf("\nEnter how much elements be there in array:");
scanf("%d",&x);

int arr[x];

printf("\nEnter the array:\n");

for(k=0;k<x;k++)
{
	scanf("%d",&arr[k]);
}

printf("\n Which no you have to find:");
scanf("%d",&find);

printf("\nThe array is:{");

for(k=0;k<x;k++)
{
	printf("%d",arr[k]);
	if(k<x-1)
	{
	printf(",");
	}
}
printf("}");

for(i=1;i<x;i++)
{
	temp=arr[i];
  if(temp==find)
  {
  	count++;
  	printf("\n The number you have to find is on %dth position in the array",count);
  break;
  }	
  else
  {
  	count++;
  		if(i == (x-=1))
  		{
  			printf("\nSorry!The Number couldn't find");
  			/* also correct  printf("\nThe Number couldn\'t find"); */
		  }
  }
  
}
	

		
return 0;	
}
