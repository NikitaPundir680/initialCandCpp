/* code for conditional program : if and else
if(condition )
{statement}
else
{statement}
code for even and odd program 
*/

#include<stdio.h>

void main()
{
int number, remainder;
printf(" enter the number= \n");
scanf("%d", &number); //input from users
printf(" entered number is=%d \n",number);
remainder = number % 2; // compute the remainder

if(remainder ==0)
{
	printf("entered number %d is an even number\n",number);
}
 else
{
	printf("entered number %d is an odd number\n",number);
}
	
	
}
