/* swapping of two numbers without using third (temp) variable */
#include<stdio.h>
void main()
{
int first=10, second=15;
printf("values before swapping are first =%d and second =%d \n",first ,second);

first = first + second;   //25
second= first -second;   //10
first = first- second; //15

printf(" values after swapping are first = %d and second = %d",first,second);
	
	
	
}
