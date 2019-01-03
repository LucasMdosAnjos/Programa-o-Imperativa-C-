#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) 
{
	int i;
	FILE *f;
	f= fopen("teste3.txt","w");
	if(f == NULL)
	{
		printf("Erro na abertura!\n");
		system("pause");
		exit(1);
	}
	char texto[25]= "KAPPA PRIDI\0";
	for(i=0;i<strlen(texto);i++)
	{
		fputc(texto[i],f);
	}
	fclose(f);
	system("pause");
	return 0;
}
