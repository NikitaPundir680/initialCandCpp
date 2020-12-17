// program to create two dimensional array (matrix)
//A= [[3,5,11],[6,4,7]]


#include<stdio.h>
int main()
{
	int A[2][3];   // matrix has 2 rows and 3 columns 
	int row, column;
	
	printf("-----------------please enter values of matrix-----------------\n");
	
	for(row = 0; row < 2; row++)
	{
	for (column = 0; column < 3; column++)
		{
			printf("\n enter the value of A[%d][%d]= ", row+1,column+1);
			scanf("%d", &A[row][column]);
		}
		
	}
	printf("\n-------------Entered matrix is --------------------\n");
	
    for(row = 0; row < 2; row++)
    {
    	for(column = 0; column < 3; column++)
    	{
    		printf("\t %d", A[row][column]);
    		
		}
		printf("\n");
	}
}
	
	


