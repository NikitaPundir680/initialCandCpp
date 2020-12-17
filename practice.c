#include<stdio.h>
#define period 10
#define principal 5000.0
main()
{
	//printf("I See, I Remember");
	
/*	int number;
	float amount;
	number=100;
	amount=30.75+75.35;
	printf("%d\n",number);
	printf("%5.2f",amount);*/
	
int year;
	float amount, inrate, value;
	amount= principal;
	inrate=1.11;
	year=0;
    while(year <= period)
	{
		printf("%2d %8.2f\n",year,amount);
		value=amount+inrate*amount;
		year=year+1;
		amount=value;
		
	}
	
	
}
