#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
   
   for(i=1; i<=iRow; i++) //outer
   {
   	for(j=1; j<=iCol; j++) // inner
	   {
	   	printf("*\t");
	   }
	   printf("\n");
   }
}
   
int main()
{
    int iValue1=0, iValue2=0;
    
    printf("Enter no of Rows\n");
    scanf("%d",&iValue1);
    
    printf("Enter no of Columns\n");
    scanf("%d",&iValue2);
    
	Display(iValue1,iValue2);
	
	return 0;
}
