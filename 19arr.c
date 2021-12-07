/*5. Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21  */
#include<stdio.h>
#include<stdlib.h>
int DigitSum(int Arr[],int iSize)
{
   
    int iDigit = 0, iSum = 0,i=0;
    for(i=0;i<iSize;i++)
    {
    	
    	while(Arr[i] > 0)
    {
        iDigit = Arr[i] % 10;
        iSum = iSum + iDigit;
        Arr[i] = Arr[i] / 10;
    }
    return iSum;
	}
    

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
	DigitSum(ptr,iLength);
	
	free(ptr);
	
	return 0;
}
