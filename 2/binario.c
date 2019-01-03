#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int conta(char*,int);
int main(){
	int a;
	int i, j, k, aux;
	char R[32];
	char *p;
	printf("Informe um valor inteiro: ");
	scanf("%d", &a);
	j= conta(R,a);
	j=j-1;
	for(i=0;i<=j;i++)
	{
		printf("%d ", R[i]);
	}
	printf("\n");
	p=&R[j];
	for(k=0;k<(j/2);k++){
		aux=*p;
		*p=R[k];
		R[k]=aux;
		p--;	
	}
	printf("\n");
	for(j=0;j<i;j++){
	printf("%d ", R[j]);	
		}
	return 0;
}
int conta(char *p,int valor)
{
	int x;
	for(x=0;valor>=1;x++)
	{
		*(p+x)= valor % 2;
		valor= valor/2;
	}
	
	return x;
}


