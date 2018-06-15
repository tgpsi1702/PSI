#include<stdio.h>
#define MAX 200

void Cifrar(char abc[], char cifra[], char texto[]);
void Decifrar(char abc[], char cifra[], char texto[]);

int main()
{
	int idx;
	char caracter;

	char abc[]={"abcdefghijlmnopqrstuvxz"};
	char cifra[]={"defghijlmnopqrstuvxzabc"};
	char texto[MAX+1];

	printf("Encriptar ou desencriptar (e/d): ");
	scanf("%c", &caracter);
	fflush(stdin);

	if(caracter=='e')
	{
		printf("Introduza o texto: ");
		gets(texto);
		Cifrar(abc,cifra,texto);
	}
	else
	{
		printf("Introduza o texto: ");
		gets(texto);
		Decifrar(abc,cifra,texto);
	}

	printf("%s\n", &texto);

	return 0;
}

void Cifrar(char abc[], char cifra[], char texto[])
{
	int idx, i;
	int ver=0;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		for(i=0;i<23;i++)
		{
			if(texto[idx]==abc[i] || texto[idx]==abc[i]-32)
			{
				if(texto[idx]==abc[i]-32)
				{
					ver=1;
					break;
				}
				else
				{
					break;
				}
			}
		}
		if(texto[idx]==32)
		{
			continue;
		}
		else
		{
			if(ver==1)
			{
				texto[idx]=cifra[i]-32;
				ver=0;
			}
			else
			{
				texto[idx]=cifra[i];
			}
		}
	}
}

void Decifrar(char abc[], char cifra[], char texto[])
{
	int idx, i;
	int ver=0;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		for(i=0;i<23;i++)
		{
			if(texto[idx]==cifra[i] || texto[idx]==cifra[i]-32)
			{
				if(texto[idx]==cifra[i]-32)
				{
					ver=1;
					break;
				}
				else
				{
					break;
				}
			}
		}
		if(texto[idx]==32)
		{
			continue;
		}
		else
		{
			if(ver==1)
			{
				texto[idx]=abc[i]-32;
				ver=0;
			}
			else
			{
				texto[idx]=abc[i];
			}
		}
	}
}