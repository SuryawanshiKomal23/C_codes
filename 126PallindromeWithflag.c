#include<stdio.h>
#include<stdbool.h>

 bool CheckPallindrome(char *start)
 {
 	char *end=NULL;
 	bool flag=true;
    end=start;
 	
 	while(*end!='\0')
 	{
 		end++;
	 }
	 end--;
	 
	 while(start<end)
    {
    	if(*start!= *end)
    	{
    		flag=false;
    		break;
		}
		start++;
		end--;
	}
		return flag;	
 }
 
int main()
{
	char Arr[30];
	bool bRet=false;
	char cValue='\0';
	
	printf("enter string\n");
	scanf("%[^'\n']s",Arr);
	
	bRet=CheckPallindrome(Arr); // CheckPallindrome(50)
	if(bRet==true)
	{
		printf("It is pallindrome\n");
	}
	else
	{
		printf("It is not pallindrome\n");
	}
	return 0;
}
