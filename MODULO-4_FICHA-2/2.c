#include<stdio.h>
#include<string.h>
#define MAX 80

int Sub(char texto[]);

int main()
{
	char caracter;

	char texto[MAX+1];

	printf("Indique o texto: ");
	gets(texto);

	printf("Indique o caracter: ");
	scanf("%c", &caracter);

	Sub(texto, caracter);

	printf("Texto corrigido: %s\n", texto);

	return 0;
}

int Sub(char texto[], char caracter)
{
	int idx;
	int cnt=0;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		if(texto[idx]==caracter)
		{
			texto[idx]='*';
		}
		else
		{
			continue;
		}
	}

	return cnt;
}