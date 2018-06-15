#include<stdio.h>
#include<string.h>
#define MAX 25

int Maiusculas(char texto[], char caracter, int comprimento);

int main()
{
	char caracter;
	int comprimento;
	int funcao;

	char texto[MAX+1];

	printf("Indique o texto: ");
	gets(texto);

	comprimento=strlen(texto);

	funcao=Remove(texto,comprimento);

	if(funcao==1)
	{
		printf("A palavra '%s' e palindromo\n", texto);
	}
	else
	{
		printf("A palavra '%s' nao e palindromo\n", texto);
	}

	return 0;
}

int Remove(char texto[],int comprimento)
{
	int idx;
	int temp;
	int igual;
	int cnt=1;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		temp=0;
		if(texto[idx]==texto[temp+comprimento-cnt])
		{
			igual=1;
			cnt++;
		}
		else
		{
			return 0;
		}
	}

	return igual;
}