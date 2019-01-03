#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i;
	int *p=(int*) malloc(5*sizeof(int));
	if(p==NULL)
	{
		printf("Erro! Sem memoria.\n");
		exit(1);
		
	}
	else
	{
		for(i=0;i<5;i++)
		{
			printf("Preencha o vetor inteiro p[%d]= ", i);
			scanf("%d", &p[i]);
		}
	}
	for(i=0;i<5;i++)
		{
			printf(" p[%d]=%d\n ", i,p[i]);
		}
		free(p);
	return 0;
}
