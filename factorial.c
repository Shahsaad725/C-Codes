#include<stdio.h>
#include<conio.h>
int main()
{
	int fact=1,i,n,j;
	int fact2=1,n2;
	float sum1=0;

	printf(" Enter the number whose factorial is to be found:");
	scanf("%d",&n);
	

			for(i=1;i<=n;i++)
			{
				fact=fact*i;
				
				
				for(j=1;j<=i;j++)
				{
					fact2=fact2*j;
					
						
				}
				--j;
				sum1+=j/fact2;
				
		
			}
			
		
 
	printf("The factorial of the number is:%d",fact);
	printf("\nThe sum is %d",sum1);
	
return 0;
}
