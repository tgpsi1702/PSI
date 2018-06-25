#include<stdio.h>
#include<stdlib.h>

int Primo(int num);

int main()
{
	int num;
	int idx;
	int final;
	int antigo, atual;
	int dif;
	int inicio, fim;
	int cnt, cnt2;
	int intervalo;

	int numPrim[150];

	num=2;
	idx=0;
	cnt=0;
	cnt2=0;

	printf("Indique o intervalo: ");
	scanf("%d %d", &inicio, &fim);

	intervalo=fim-inicio;

	while(cnt2!=intervalo)
	{
		if(cnt==0)
		{
			while(cnt<=inicio-1)
			{
				final=Primo(num);
				if(final==1)
				{
					cnt++;
					antigo=num;
				}
				num++;
			}
		}
		else
		{
			num++;
		}
		final=Primo(num);
		if(final==1)
		{
			atual=num;
			dif=atual-antigo;
			numPrim[idx]=dif;
			cnt2++;
			antigo=num;
			idx++;
		}
		else
		{
			while(final!=1)
			{
				num++;
				final=Primo(num);
			}
			atual=num;
			dif=atual-antigo;
			numPrim[idx]=dif;
			cnt2++;
			antigo=num;
			idx++;
		}
	}

	idx=0;

	while(idx<intervalo)
	{
		printf("%d\n", numPrim[idx]);
		idx++;
	}

	return 0;
}

int Primo(int num)
{
	int div;

	if(num <= 1)  
		// os primos s�o > 1
		return 0;
	if(num == 2)
		return 1;
	else
	{
		if(num % 2 == 0)
			// o �nico n�mero par primo � o 2
			return 0;
		else
		{
			for(div = 2; div < num; div++)
			{
				if(num % div == 0)
					return 0;
			}
			return 1;
		}
	}
}