#include<stdio.h>

int Reverse(int);


int main()
{
	int iValue=0, iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=Reverse(iValue);
	printf("Reverse number is:%d\n",iRet);
	return 0;
}
int Reverse(int iNo)
{
	int iDigit=0,iRev=0;

	while(iNo!=0) ///if u write while"(iNo!=0)" then the negative no also can enter to the loop.
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iRev=(iRev*10+iDigit);
		iNo=iNo/10;
	}
	
	return iRev;
}
