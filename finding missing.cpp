#include<stdio.h>
#include<conio.h>

int main()
{
	int num[10]={1,2,3,4,6,7,8,9,10};
	int i,j=0;
	int check;
	
	for(i=0;i<9;i++)
	{
	
	check=num[i];
		
		++j;
		
		
		if(check==j)
		{
		 printf("\n%d",num[i]);	
		} 	
		else
		{
			printf("\n%d is missing.",j);
			++j;
		}
	}
}
