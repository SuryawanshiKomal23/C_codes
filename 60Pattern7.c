//Input:  6
//iCnt:   1 2 3 4 5 6
//Output: a b c d e f

#include<stdio.h>

void Display()
{
   int iRow=3;
   char iCol=4;
   int i=0,j=0;
   
   for(i=1; i<=iRow;i++)
   {
   	for(j=1;j<=iCol;j++)
	   {
	   	printf("*\t");
	   }
	   printf("\n");
   }
}
   

int main()
{

	Display();
	
	return 0;
}
