/* code for loop : need to run an updated statement multiple times
keyword : for ,while, do-while
for(start ; check; count)
{statement }
code for factorial of a number :  5!=120


*/
#include<stdio.h>
void main()
{
 int number, factorial=1, i;
 printf("enter the number=");
 scanf("%d", &number);
 if (number>=0)
 
 { 
 if(number ==0)
 {
 factorial =1;
 
 }
 else
 {
         for(i = 1; i<= number; i++)
 
 
 { 
 factorial= factorial*i;
 printf("iteration number=%d and factorial value =%d\n",i,factorial);
 }
 }	
 }
 else{ 
 factorial=0;
 }
 printf(" factorial of enterred number %d is %d",number,factorial);
 	
}





            

