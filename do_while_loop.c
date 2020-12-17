#include<stdio.h>
void main()
{
	int number, factorial=1, i;
	printf("enter the number = ");
	scanf("%d", &number);
	if(number>=0)
	{
		if(number==0)
		{
			factorial=1;
		}
		else
		{
			i=1;            //start
			do
			{
				factorial = factorial*i;
				printf("iteration number= %d and factorial value=%d\n",i,factorial);
				i=i+1;          //count
			}
			while(i<=number);
			
		}
	}
	else
	{
		factorial =0;
		
	}
	printf("factorial of the entered number %d", number,factorial);
}
