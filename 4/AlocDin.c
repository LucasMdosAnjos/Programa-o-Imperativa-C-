#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*aloca��o dinamica de memoria*/
int main()
{
	int *v=(int*) malloc(50*sizeof(int));  /*Cria��o de um array de 50 inteiros*/
	char *c=(char*) malloc(50*sizeof(char)); /*Cria��o de um aray de 50 char*/
	system("pause");
	return 0;
}
