//accept n no and return minimum no.

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iSize)
{
   int i=0,iMin=Arr[0],iMax=Arr[0]; ///set Arr[0]   iMax=0;
   
   for(i=1;i<iSize;i++)	
   {
   	if(Arr[i]<iMin)
   	{
   		iMin=Arr[i];
	   }
	   if(Arr[i]>iMax)
   	{
   		iMax=Arr[i];
	   }
	   
}
   return iMax-iMin;
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
	
	iRet=Difference(ptr,iLength);
	
	printf("Difference bet max and min is :%d\n",iRet);
	free(ptr);
	
	return 0;
}
