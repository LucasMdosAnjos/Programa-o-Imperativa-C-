#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*alocação dinamica de memoria*/
int main()
{
	int *v=(int*) malloc(50*sizeof(int));  /*Criação de um array de 50 inteiros*/
	char *c=(char*) malloc(50*sizeof(char)); /*Criação de um aray de 50 char*/
	system("pause");
	return 0;
}
