//count small and capital letters
#include<stdio.h>
void Count(char *str)
{
	int Scount=0, Ccount=0;
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			Ccount++;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			Scount++;
		}
		str++;
	}
	printf("Capital letters are:%d\n",Ccount);
	printf("Small letters are:%d\n",Scount);
	
}

int main()
{
	char Arr[20];
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	Count(Arr);
	return 0;
}
