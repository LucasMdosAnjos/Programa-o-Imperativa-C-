#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i;
	char str[12]="Hello World";
	char str2[12];
	
	for(i=0;str[i]='\0';i++)
	{
		str2[i]=str[i];
	}
	for(i=0;i<13;i++)
	{
		printf("str[%d]=%d", i,str[i]);
	}
	
}
