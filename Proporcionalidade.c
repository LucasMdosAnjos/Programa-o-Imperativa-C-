#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void DP(float V,float Soma,float *vet,int i)
{
	int x;
	float R;
	for(x=0;x<i;x++)
	{
		R=((V*((*vet)))/(Soma));
		printf("O numero %.2f diretamente proporcional a %.2f eh igual a=%.2f\n", V, *vet, R);
		printf("\n\n");
		vet++;
		
	}

}
void IP(float V,float Soma,float *vet,int i)
{
	int x;
	float R;
	for(x=0;x<i;x++)
	{
		R=((V*(1/(*vet)))/(Soma));
		printf("O numero %.2f diretamente proporcional a %.2f eh igual a=%.2f\n", V, *vet, R);
		printf("\n\n");
		vet++;
		
	}

}
	
int main()
{
	int menu;
	int i, j;
	int k;
	int x;
	int y;
	float a[i],b[j], V, S=0.0;
	printf("1 - \t DIVISAO DE UM NUM EM PARTES diretamente proporcionais\n");    
	printf("2 - \t DIVISAO DE UM NUM EM PARTES inversamente proporcionais\n");  
	printf("3 - \t DIVISAO DE UM NUM EM PARTES envolvendo os dois\n");          
	printf("Digite o numero correspondente a opcao desejada: ");
	scanf("%1d", &menu);
	switch (menu) {
	case 1: 
		printf("Informe um valor como base para o calculo proporcional: ");
		scanf("%f", &V);
		printf("Informe quantas variaveis proporcionais vc vai usar: ");
		scanf("%d", &i);
		for(k=0;k<i;k++)
		{
		printf("Digite os valores referentes as variaveis proporcionais q vc criou: ");
		scanf("%f", &a[k]);
		}
		for(x=0;x<i;x++)
		{
		S= S+ a[x];
		}
	
		DP(V,S,a,i);
		break;
	case 2:
		printf("Informe um valor como base para o calculo proporcional: ");
		scanf("%f", &V);
		printf("Informe quantas variaveis proporcionais vc vai usar: ");
		scanf("%d", &i);
		for(k=0;k<i;k++)
		{
		printf("Digite os valores referentes as variaveis proporcionais q vc criou: ");
		scanf("%f", &a[k]);
		}
		for(x=0;x<i;x++)
		{
		S= S+ (1/a[x]);
		}
		printf("S=%f\n", S);
		IP(V,S,a,i);
		break;
	case 3:
		printf("Informe um valor como base para o calculo proporcional: ");
		scanf("%f", &V);
		printf("Informe quantas variaveis diretamente proporcionais vc vai usar(o num de Var IP=DP!): ");
		scanf("%d", &i);
		
		for(k=0;k<i;k++)
		{
		printf("Digite os valores referentes as variaveis diretamente proporcionais q vc criou: ");
		scanf("%f", &a[k]);
		}
		for(k=0;k<i;k++)
		{
		printf("Digite os valores referentes as variaveis diretamente proporcionais q vc criou: ");
		scanf("%f", &b[k]);
		
		}	
	system("pause");
	return 0;
}
}
