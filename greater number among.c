/*
code to find greater among three value

*/
#include<stdio.h>
void main()
{
	int first_no, second_no, third_no, largest;
	printf("enter the first number=");
	scanf("%d", &first_no);
	printf("enter the second numbrer=");
	scanf("%d", &second_no);
	printf("enter the third numbrer=");
	scanf("%d",&third_no);
	if (first_no >=second_no)
	{
		if(first_no >= third_no)
		{
		largest = first_no;
		}
		else
		{
			largest= third_no;
		}
	}
	else
	{
		if(second_no >= third_no)
		{
			largest = second_no;
			
		}
		else
		{
			largest = third_no;
		}
	}
	printf(" entered number are: first=%d, second=%d, third=%d \n", first_no, second_no,third_no);
    printf(" the greater number among three enterred number is %d",largest);	

	
}
