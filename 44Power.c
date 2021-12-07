#include<stdio.h>

int DislpayPower(int);

int main()
{
	int iValue1=0;
	int iValue2=0;
	
	printf("Enter numbers to display table\n");
	scanf("%d",&iValue1,&iValue2);
	
	DisplayPower(iValue1,iValue2);
	return 0;
}
