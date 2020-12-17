/*
nesting if- else or if -else ladder
:code for exam grading system :
if marks >= 75%
first divison with honrs
if marks >=60 na d<75
first divison only 
if marks >=45% and <60%
second division 
if marks >= 33% and <45%
pass third division 
if marks <35%:
fail in the exam 

*/
#include<stdio.h>
 void main()
 {
  float marks ;
  printf("enter the marks percentage obtained:");
  scanf("%f", &marks);
  //printf(" entered marks are 0.2%f",marks);
      
      if(marks <33)
      {
      	printf("the person has been failed in the exam.\n ");
      	
      	
	  }
  	else
  	{
  		if (marks >= 33 && marks<45)
  		{
  			printf("the person has passeds with third division.\n");
  			
		}
		  else
		{ 
		if(marks >= 45 && marks <60)
		{
		printf(" the person has been with second division.\n");	
		}
		 else
		 {
		 	if (marks >=60 && marks<75)
		 	{
		 		printf(" the person has been passed with first division \n");
			 }
			  } 	
		  }
	}
}
	    
