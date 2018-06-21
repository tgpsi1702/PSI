#include<stdio.h>
#define MAX 150

int RemovePar(int Nums[], int qtdNums);
void Ordenar(int Nums[], int qtdNums);


int main()
{
	int num;
	int qtd;
	int idx;
	int par;

	int Nums[MAX];

	printf("Indique a quantidade de numeros: ");
	scanf("%d", &qtd);

	puts("");

	for(idx=0;idx<qtd;idx++)
	{
		printf("Indique os numeros: ");
		scanf("%d", &num);
		Nums[idx]=num;
	}

	par=RemovePar(Nums,qtd);
	Ordenar(Nums, qtd-par);

	for(idx=0;idx<qtd-par;idx++)
	{
		printf("%d\n", Nums[idx]);
	}

	return 0;
}

int RemovePar(int Nums[], int qtdNums)
{
	int idx;
	int index;
	int cnt;

	cnt=0;

	for(idx=0;idx<qtdNums-cnt;idx++)
	{
		if(Nums[idx]%2==0)
		{
			cnt++;
			for(index=idx;index<qtdNums-cnt;index++)
			{
				Nums[index]=Nums[index+1];
			}
			if(Nums[idx]%2==0)
			{
				cnt++;
				for(index=idx;index<qtdNums-cnt;index++)
				{
					Nums[index]=Nums[index+1];
				}
			}
		}
	}

	return cnt;
}

void Ordenar(int Nums[], int qtdNums)
{
	int idx;
	int temp;

	for(idx=0;idx<qtdNums-1;idx++)
	{
		if(Nums[idx]>Nums[idx+1])
		{
			temp=Nums[idx];
			Nums[idx]=Nums[idx+1];
			Nums[idx+1]=temp;
			idx=-1;
		}
	}
}