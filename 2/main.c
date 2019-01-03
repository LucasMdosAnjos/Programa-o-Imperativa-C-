#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float resposta;
float adi(float,float);
float sub(float,float);
float multi(float,float);
float divi(float,float);
float expo(float,float);
float quad(float);
float inv(float);

int main() {
	int V, j, i;
	float x,y;	
	printf("Informe o primeiro valor para calcular= ");
	scanf("%f", &x);
	printf("Informe o segundo valor para calcular= ");
	scanf("%f", &y);
	printf("Informe quantas vezes deseja usar a calculadora: ");
	scanf("%d", &j);
	system("pause");
	system("cls");
	for(i=1;i<=j;i++){
	printf("1 - \t Soma\n");
	printf("2 - \t Subtracao\n");
	printf("3 - \t Multiplicacao\n");
	printf("4 - \t Divisao\n");
	printf("5 - \t Expoente\n");
	printf("6 - \t Quadrado do primeiro\n");
	printf("7 - \t Quadrado do segundo\n");
	printf("8 - \t Inverso do primeiro\n");
	printf("9 - \t Inverso do segundo\n");
	printf("Digite o numero correspondente a opcao selecionada: ");
	scanf("%d", &V);
	switch (V)
	{
		case 1: resposta= adi(x,y);
		printf("Reposta=%.2f\n", resposta);
		break;
		case 2: resposta= sub(x,y);
		printf("Resposta=%.2f\n", resposta);
		break;
		case 3:	resposta= multi(x,y);
		printf("Reposta=%.2f\n", resposta);
		break;
		case 4: resposta= divi(x,y);
		printf("Reposta=%.2f\n", resposta);
		break;
		case 5: resposta= expo(x,y);
		printf("Reposta=%.2f\n", resposta);
		break;
		case 6: resposta= quad(x);
		printf("Reposta=%.2f\n", resposta);
		break;
		case 7: resposta= quad(y);
		printf("Reposta=%.2f\n", resposta);
		break;
		case 8: resposta= inv(x);
		printf("Reposta=%.2f\n", resposta);
		break;
		case 9: resposta= inv(y);
		printf("Reposta=%.2f\n", resposta);
		break;	
	}
	system("pause");
	system("cls");
}
	return 0;
}

float adi(float a, float b)
{
	float soma;
	soma= a+b;
	return soma;
}
float sub(float a, float b)
{
	float subtracao;
	subtracao=a-b;
	return subtracao;
}
float multi(float a, float b)
{
	float multi;
	multi=a*b;
	return multi;
}
float divi(float a,float b)
{
	float divi;
	divi= a/b;
	return divi;
}
float expo(float a,float b)
{
	float expo;
	expo= pow(a,b);
	return expo;
}
float quad(float a)
{
	float quad;
	quad= a*a;
	return quad;
}
float inv(float a)
{
	float inv;
	inv = 1/a;
	return inv;
}
