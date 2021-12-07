//Input:  6
//Output: * # * # * #

#include<stdio.h>

void Display(iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)   //(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iCnt%2==0)
		{
		printf("# ");
	}
	else
		{
			printf("* ");
		}
		
	}
	
}
int main()
{
	int iValue=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}


	
 
