#include<stdio.h>

int main()
{
	char Arr[40];
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Your entered name is: %s",Arr);
	
	
	return 0;
}
