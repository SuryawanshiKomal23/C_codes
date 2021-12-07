/*1. Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)   */

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
	int iSumOdd=0,iSumEven=0,i=0;
	int iResult=0;
	
	for(i=0;i<iSize;i++)
	{
		if((Arr[i]%2)==0)
	    {iSumEven=iSumEven+Arr[i];}
	    else
	    {iSumOdd=iSumOdd+Arr[i];}
	
	}
	return iSumEven-iSumOdd;
}
int main()
{
	int iLength=0,i=0,iRet=0;
	int*ptr=NULL;
	printf("Enter no of Elements\n");
	scanf("%d",&iLength);
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	iRet=Difference(ptr,iLength);
	free(ptr);
	return 0;
}
