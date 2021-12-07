// capital to small
#include<stdio.h>
int CapitalToSmall(char c)
{
	if((c>='A') && (c<='Z'))
	{
		return c+32;
	}
	
}

int main()
{
	char ch='\0';
	char CRet='\0';
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	CRet=CapitalToSmall(ch);
	
    printf("Small letter is :%c\n",CRet);

	
	return 0;
}
