#include<stdio.h>

int Menor(int Nums[], int index, int indexFim);
int Maior(int Nums[], int index, int indexFim);
double Media(int Nums[], int index, int indexFim);

int main()
{
	int num;
	int indexFim;
	int idx, index;
	int soma, media;
	int maior1, menor1;
	int maior2, menor2;
	double media1, media2;

	int Nums[150];

	indexFim=9;
	soma=0;

	for(idx=0;idx<=indexFim;idx++)
	{
		printf("Indique o numero: ");
		scanf("%d", &num);
		Nums[idx]=num;
		soma=soma+num;
	}

	index=0;

	maior1=Maior(Nums, index, indexFim);
	menor1=Menor(Nums, index, indexFim);
	media1=Media(Nums, index, indexFim);

	indexFim=149;

	puts("");

	for(idx=140;idx<=indexFim;idx++)
	{
		printf("Indique o numero: ");
		scanf("%d", &num);
		Nums[idx]=num;
		soma=soma+num;
	}

	index=140;

	maior2=Maior(Nums, index, indexFim);
	menor2=Menor(Nums, index, indexFim);
	media2=Media(Nums, index, indexFim);

	printf("\n\nO maior numero na primeira parte e: %d\n", maior1);
	printf("\nO menor numero na primeira parte e: %d\n\n", menor1);
	printf("\nA media na primeira parte e: %.3lf\n\n", media1);
	printf("\n\nO maior numero na segunda parte e: %d\n", maior2);
	printf("\nO menor numero na segunda parte e: %d\n\n", menor2);
	printf("\nA media na segunda parte e: %.3lf\n\n", media2);

	return 0;
}

int Maior(int Nums[], int index, int indexFim)
{
	int pos;
	int maior;
	int idx;

	pos=0;

	for(idx=index;idx<=indexFim;idx++)
	{
		if(Nums[idx]>Nums[pos])
		{
			maior=Nums[idx];
			pos=idx;
		}
		else
		{
			maior=Nums[pos];
		}
	}

	return maior;
}

int Menor(int Nums[], int index, int indexFim)
{
	int pos;
	int menor;
	int idx;

	pos=0;

	for(idx=index;idx<=indexFim;idx++)
	{
		if(Nums[idx]<Nums[pos])
		{
			menor=Nums[idx];
			pos=idx;
		}
		else
		{
			menor=Nums[pos];
		}
	}

	return menor;
}

double Media(int Nums[], int index, int indexFim)
{
	int soma;
	double media;
	int idx;
	int cnt;

	soma=0;
	cnt=0;

	for(idx=index;idx<=indexFim;idx++)
	{
		soma=soma+Nums[idx];
		cnt++;
	}

	media=(double)soma/cnt;

	return media; 
}