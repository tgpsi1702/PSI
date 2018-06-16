#include<stdio.h>

#define MAX 100

void Descodificar(char texto[], char vogais[]);
int EntreAB(int x, int inf, int sup);
int VerTxt(char texto[]);

int main()
{
	int idx, idx2;
	int qtd;
	int ok=0;

	char vogais[]={"aeiou"};
	char texto[MAX];

	printf("Indique a quantidade de mensagens: ");
	scanf("%d", &qtd);

	if(EntreAB(qtd,1,500)==1)
	{
		fflush(stdin);
		for(idx=0;idx<qtd;idx++)
		{
			printf("Mensagem %d: ", idx+1);
			gets(texto);

			for(idx2=0;texto[idx2]!='\0';idx2++)
			{
				if(EntreAB(texto[idx2],'A','Z')==1 || EntreAB(texto[idx2],'a','z')==1 || EntreAB(texto[idx2],0,9)==1 || texto[idx2]=='95')
				{
					ok=1;
				}
				else
				{
					ok=0;
					puts("MENSAGEM INVALIDA");
					break;
				}
			}

			if(ok==1)
			{
				Descodificar(texto,vogais);

				printf("%s\n", &texto);

				ok=0;
			}
			else
			{
				idx--;
			}
		}
	}
	else
	{
		printf("Valor invalido\n");
	}

	return 0;
}

void Descodificar(char texto[], char vogais[])
{
	int idx, idx2, idx3;
	int cons=0;
	int parar=0;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		if(texto[idx]=='p')
		{
			for(idx2=0;idx2<5;idx2++)
			{
				if(texto[idx+1]==vogais[idx2])
				{
					for(idx3=idx;texto[idx3]!='\0';idx3++)
					{
						texto[idx3]=texto[idx3+1];
					}
					for(idx3=idx;texto[idx3]!='\0';idx3++)
					{
						texto[idx3]=texto[idx3+1];
					}
				}
			}
		}
	}
}

int EntreAB(int x, int inf, int sup)
{
	if(x >= inf && x <= sup)
		return 1;
	else
		return 0;
}

int VerTxt(char texto[])
{
	int idx;
	int ok;

	int EntreAB(int x, int inf, int sup);

	for(idx=0;texto[idx]!='\0';idx++)
	{
		if(EntreAB(texto[idx],'A','Z')==0 || EntreAB(texto[idx],'a','a')==0 || EntreAB(texto[idx],0,9)==0 || texto[idx]=='95')
		{
			ok=1;
		}
		else
		{
			return 0;
		}
	}

	if(ok=1)
	{
		return 1;
	}

}