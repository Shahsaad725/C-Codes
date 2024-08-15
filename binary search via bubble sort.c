/* binary search via insertion sort program*/
#include<stdio.h>

int main()
{

int x,y,i,j,k,pass=0,count=0,temp=0,integer;

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
printf("}\n\n");

printf("\nThe passes executed are:%d",pass);
printf("\nThe total no of comparision:%d\n\n",count);


			//  Bubble sort ended



			//  binary search started
			



	int mid,div=0,ind=0,l=0,r=0,key;
	//int arr[9]={10,13,24,29,39,45,56,59};

	
	


	
	printf("\nHow many integers you have to find:");
	scanf("%d",&integer);
	
	int arr2[integer];
	
	if(integer>1)
	{
		printf("\nEnter the numbers you have to find:\n");
	}
	else
	{
		printf("\nEnter the number you have to find:");
	}
	
	for(i=0;i<integer;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	printf("\nHit enter to find number:\n\n");
	
	getch();
	
	for(i=0;i<integer;i++)
	{
		key=arr2[i];
	
			// x is the size of array
	
	l=0;
	//r=8;
	r=x-1;   // last index of array
		
		while(l<=r)
		{
			div=((l+r)/2);
			mid=arr[div];
		
			if(key==mid)
			{
				//count++;
				ind=div;
				break;
			}
			else if(key<mid)
			{
				r=div-1;
			}
			else if(key>mid)
			{
				l=div+1;
			}
		}
	

	
		if(key==mid)
		{
			ind=div;
			printf("\nThe integer is %d and the integer is on index %d:",mid,ind);
		}
		else
		{
			printf("\nOOPS! The required number %d cuoldn't find:",key);
		}
	
	}

		printf("\n\n\n");
return 0;	
}
