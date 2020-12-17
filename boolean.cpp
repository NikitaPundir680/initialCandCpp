/*
code for relational operators:
equals to=
greater than >
less than <
greater than or equal to>=
less than or equal to <=
not equal to !=

all these operators returns true or false value i.e boolean value
 bool in c++*
 1=true,0=false*/
 
 #include<stdio.h>
 
int main()
 {
 	int first_number,second_number;//variable decalaration 
 bool result;
 	//variable initialization
 	first_number=10;
 	second_number=12;
 	//result=first_number>second_number;
 	printf("first_number= %d  is greater than second_number=%d: %d\n", first_number,second_number,result);
 	printf("first_number= %d is greater than or equals to the second_number=%d: %d\n",first_number,second_number,first_number>=second_number);
 	printf("first_numbeer= %d is less than or equal to the second_number=%d: %d\n",first_number,second_number,first_number<=second_number);
 	printf("first_number= %d is less than second_number=%d: %d\n",first_number,second_number,first_number<second_number);
 	printf("first_number= %d is equal to second_number=%d: %d\n",first_number,second_number,first_number=second_number);
 	printf("first_number= %d is not equal to second_number=%d: %d\n",first_number,second_number,first_number!=second_number);
 
 	return 0;
 }

