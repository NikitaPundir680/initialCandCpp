/* Function in c:
A function four entities 
return type , function name , parameters, function body
function signature = return type + function name + parametres.

there are two types of functions in c
cal by value 
call by reference
differnce between call by value and call by reference functions types modular coding
*/



/*#include<stdio.h>
void print_my_name(char );

void main()  // void is return type, main:function name , ()no parameter is passed
{
char name = 'N';
print_my_name(name);
}//function body 

void print_my_name(char n)
{
	printf("hello %c",n);
}*/




// Call by value :sum of two number

#include<stdio.h>
int sum_of_two(int,int);

void main()
{
	int first_no=10, second_no =15;
	int sum;
	sum = sum_of_two(first_no, second_no);
	printf("Sum of %d = %d", first_no, second_no, sum);
}

int sum_of_two(int fn, int sn)
{
return(fn+sn);
}

