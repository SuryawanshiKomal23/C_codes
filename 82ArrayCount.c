
#include<stdio.h>
#include<stdlib.h>
int Count(int Arr[],int iSize)
{
   int i=0, iSum=0 ,iCnt=0;
   
   for(i=0;i<iSize;i++)	
   {
   	if(Arr[i]>10)
	   {

	   iCnt++;
   }
}
   
   return iCnt;
}
int main()
{
	int iLength=0,i=0, iRet=0;
	int*ptr=NULL;
	
	
	printf("Enter Number of Elements\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter Elements\n");
	for(i=0; i<iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=Count(ptr,iLength);
	
	printf("Count of no greater than 10 is :%d\n",iRet);
	free(ptr);
	
	return 0;
}
