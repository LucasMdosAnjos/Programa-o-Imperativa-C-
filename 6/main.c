#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	FILE *f;
	f= fopen("arquivo.txt","w");
	if(f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	fputs("Hello",f);
	fputs("\nWorld",f);
	return 0;
}
