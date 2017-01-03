#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("Enter the number of times to display : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<i)
			{
				printf("\t");
			}
			else
			{	
			printf("*\t");
		}
	
		
	   }
	   printf("\n");
	}
	
	
	
	return 0;
}	
			
			
