#include<stdio.h>

int main()
{
 	int i, j, rows, cols, a[10][10], Sum = 0;
 	int *ptr=&Sum;

 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);

 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(cols = 0;cols < j;cols++)
    	{
      		scanf("%d", &a[rows][cols]);
    	}
  	}

 	for(rows = 0; rows < i; rows++)
  	{
   		Sum = Sum + a[rows][rows];
   		ptr = Sum;
  	}

 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", ptr );

 	return 0;
}
