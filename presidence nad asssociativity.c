/* code for presidency and associativity*/
#include<stdio.h>
void main()
{
int a=5, b=6, c=7, result;	
//result=a+2*b +c*a-a/b +c%a;
//printf(" desired output =%d",result); //54
result= a*b*c +b%c -c*a -b/a;
printf(" desired output=%d",result);

}
