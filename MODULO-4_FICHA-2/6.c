#include<stdio.h>
#define MAX 30

int qtdLetras(char palavra[], char um[], char dois);

int main()
{
	int idx;
	int qtd;
	int funcao=0;

	char um[]="ADOPQR";
	char dois='B';
	char palavra[MAX+1];

	printf("Indique a quantidade de palavra: ");
	scanf("%d", &qtd);

	for(idx=0;idx<qtd;idx++)
	{
		printf("Indique a palavra: ");
		fflush(stdin);
		gets(palavra);
		funcao+=qtdLetras(palavra,um,dois);
	}

	printf("Existem %d buracos no texto\n", funcao);

	return 0;
}

int qtdLetras(char palavra[], char um[], char dois)
{
	int idx, i;
	int qtd=0;

	for(idx=0;idx<palavra[idx]!='\0';idx++)
	{
		for(i=0;um[i]!='\0';i++)
		{
			if(palavra[idx]==um[i])
			{
				qtd++;
				break;
			}
			else
			{
				if(palavra[idx]==dois)
				{
					qtd+=2;
					break;
				}
			}
		}
	}
	return qtd;
}
