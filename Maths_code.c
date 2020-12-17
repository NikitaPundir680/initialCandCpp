/*
program to compute the simple interest and compound interest
simple interest= amount*rate*time/100
*/

#include<stdio.h>
#include<math.h>
#define pi=
void main()
{   //implicit typecasting
	int amount;
	float rate,time,interest;
	
	printf("please enter the amount=");
	scanf("%d", &amount);
	printf("please neter the time=");
	scanf("%f",&time);
	printf("please enter the rate=");
	scanf("%f", &rate);
	
	interest=(amount*time*rate)/100;   //typecasting is of two types
	//implicit and exlicit typecasting
	// in lat interest it was in the form of 4byte[000000110110000000000000000000110000000000000000000000000000000000] 
	//bt after type casting 16digits become in int form
	printf(" required interest is %f nad after typecasting it is %d\n",interest,interest);
	//pow(x,y):x to the power y
 //printf("compound interest =%f",compound_interest);	
printf("the value of pi is =%f\n",pi);
	
}


