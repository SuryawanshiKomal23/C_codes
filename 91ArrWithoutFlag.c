
//without flag
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[],int iSize)
{
   int i=0;
   for(i=0;i<iSize;i++)
   {
   	if(Arr[i]==11)
   	{break;}
   	}
   if(i==iSize)
   {
   	 return false;
   }
   else
   {
   	return true;
   }
   }
int main()
{
	int iLength=0,i=0;
	int*ptr=NULL;
	bool bRet=false;
	
	printf("Enter Number of Elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter Elements\n");
	
	for(i=0; i<iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	bRet=CheckNumber(ptr,iLength);
	if(bRet==true)
	{
		printf("Number is There\n");
	}
	else
	{
		printf("Number is not there\n");	
	}

	free(ptr);
	
	return 0;
}
