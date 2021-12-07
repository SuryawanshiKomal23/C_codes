//small to capital
#include<stdio.h>

int SmallToCapital(char c)
{
	if((c>='a') && (c<='z'))
	{
		return c-32;
	}
	
}
int main()
{
	char ch='\0';
	char CRet='\0';
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	CRet=SmallToCapital(ch);
	
    printf("Capital letter is :%c\n",CRet);

	
	return 0;
}
