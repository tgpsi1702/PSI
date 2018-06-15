#include<stdio.h>
#include<string.h>
#define MAX 200

void Contagem(char texto[], int letras[], char minusculas[], char maiusculas[]);

int main()
{
	int idx=0;

	char texto[MAX+1];
	int letras[23];
	char maiusculas[]={"ABCDEFGHIJLMNOPQRSTUVXZ\0"};
	char minusculas[]={"abcdefghijlmnopqrstuvxz\0"};

	printf("Indique o texto: ");
	gets(texto);

	Contagem(texto,letras, minusculas, maiusculas);

	for(idx=0;idx<23;idx++)
	{
		printf("%d\t\n", letras[idx]);
	}

	return 0;
}

void Contagem(char texto[], int letras[], char minusculas[], char maiusculas[])
{
	int idx, i;
	int cnt=0;

	for(idx=0;minusculas[idx]!='\0';idx++)
	{
		for(i=0;texto[i]!='\0';i++)
		{
			if(minusculas[idx]==texto[i] && minusculas[idx]-maiusculas[idx]==32)
			{
				cnt++;
			}
		}
		letras[idx]=cnt;
		cnt=0;
	}
}


/*for(idx=0;texto[idx]!='\0';idx++)
		{
			pos = ProcChar(minusculas, tolower(texto[idx])
			if(pos != -1)
				letras[pos]++;
		}
		letras[i]=cnt;
		cnt=0;*/