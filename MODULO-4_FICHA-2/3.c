#include<stdio.h>
#include<string.h>
#define MAX 80

int Maiusculas(char texto[], char caracter, int comprimento);

int main()
{
	char caracter;
	int comprimento;
	int funcao;

	char texto[MAX+1];

	printf("Indique o texto: ");
	gets(texto);

	printf("Indique o caracter que pretende eliminar: ");
	scanf("%c", &caracter);

	comprimento=strlen(texto);

	funcao=Remove(texto,caracter,comprimento);

	printf("Texto corrigido: %s\n",texto);
	printf("Foram corrigidos %d erros\n", funcao);

	return 0;
}

int Remove(char texto[], char caracter, int comprimento)
{
	int idx, index, temp;
	int cnt=0;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		if(texto[idx]==caracter)
		{
			temp=idx;
			cnt++;
			for(index=idx;index<=comprimento;index++)
			{
				texto[index]=texto[index+1];
			}
		}
		else
		{
			continue;
		}
	}

	return cnt;
}