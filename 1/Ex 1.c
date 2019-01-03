#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int a;
	int i;
	int V[30];
	
	printf("Informe um valor em decimal: ");
	scanf("%d", &a);
	V[0]=a;
	for(i=1;a>=2;i++)
	{
		a=a/2;
		V[i]=a;
		printf("V[%d]=%d\n", i,V[i]);
	}
	
	
	return 0;
}
