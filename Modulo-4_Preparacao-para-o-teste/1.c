#include<stdio.h>

#define qtd 150
#define MAX 100000

int VerQtd(int qtdNaves);
int VerLotacao(int lotacao);
double Media(int lotacoes[], int qtdNaves);
int Contagem(int lotacoes[], int qtdNaves, int ocorrencias[]);

int main()
{
	int qtdNaves;
	int idx;
	int lotacao;
	double media;
	int contagem;

	int lotacoes[MAX];
	int ocorrencias[]={0,0,0,0,0,0,0,0,0,0};

	printf("Indique a quantidade de naves: ");
	scanf("%d", &qtdNaves);

	if(VerQtd(qtdNaves)==1)
	{
		printf("Lotacoes;\n");
		
		for(idx=0;idx<qtdNaves;idx++)
		{
			scanf("%d", &lotacao);
			if(VerLotacao(lotacao)!=0)
			{
				lotacoes[idx]=lotacao;
			}
			else
			{
				puts("VALOR INVALIDO");
				idx--;
			}
		}

		media=Media(lotacoes,qtdNaves);

		contagem=Contagem(lotacoes,qtdNaves,ocorrencias);

		printf("Digito mais frequente: %d\n", contagem+1);
		printf("O digito mais frequente ocorre %d vezes\n", ocorrencias[contagem]);
		printf("A media das lotacoes e: %.2lf\n", media);
	}

	return 0;
}

int VerQtd(int qtdNaves)
{
	if(qtdNaves<3 || qtdNaves>150)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int VerLotacao(int lotacao)
{
	if(lotacao<3 || lotacao>150)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

double Media(int lotacoes[], int qtdNaves)
{
	int idx;
	int soma=0;
	double media;

	for(idx=0;idx<qtdNaves;idx++)
	{
		soma+=lotacoes[idx];
	}

	media=soma/(qtdNaves*1.0);

	return media;
}

int Contagem(int lotacoes[], int qtdNaves, int ocorrencias[])
{
	int idx;
	int maior;
	int divReal, divInt;

	for(idx=0;idx<qtdNaves;idx++)
	{
		divReal=lotacoes[idx]%10;
		divInt=lotacoes[idx]/10;

		ocorrencias[divReal-1]++;
		ocorrencias[divInt-1]++;
	}

	for(idx=0;idx<qtdNaves;idx++)
	{
		if(ocorrencias[idx]>ocorrencias[idx+1])
		{
			maior=idx;
			idx++;
		}
		else
		{
			maior=idx+1;
		}
	}

	return maior;
}