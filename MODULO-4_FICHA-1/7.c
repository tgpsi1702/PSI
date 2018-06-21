#include<stdio.h>

int EntreAB(int x, int inf, int sup);
int EntreAB2(int x, int inf, int sup);

int main()
{
	int qtdV, num;
	int cnt, cnt2;
	int idx;
	int valid;
	int antigo, temp;
	int div, dobro, divTemp, dobroTemp;
	int vezes;

	int temperaturas[100];

	cnt=0;
	cnt2=0;

	printf("Indique a quantidade de valores: ");
	scanf("%d", &qtdV);

	valid=EntreAB(qtdV,10,100);

	if(valid==1)
	{
		for(idx=0;idx<qtdV;idx++)
		{
			printf("Indique a temperatura: ");
			scanf("%d", &num);
			valid=EntreAB2(num,0,50);
			if(valid==1)
			{
				if(cnt==0)
				{
					temperaturas[idx]=num;
					antigo=num;
					cnt++;
					temp=num;
				}
				else
				{
					div=antigo/2;
					dobro=antigo*2;
					divTemp=temp/2;
					dobroTemp=temp*2;
					if(num>dobroTemp || num<divTemp)
					{
						temperaturas[idx]=temp;
						antigo=num;
						temp=num;
						cnt2++;
					}
					else
					{
						if(num>dobro || num<div)
						{
							cnt2++;
							temperaturas[idx]=antigo;
							temp=num;
						}
						else
						{
							temperaturas[idx]=num;
							antigo=num;
							temp=num;
						}
					}
				}
			}
			else
			{
				while(valid!=1)
				{
					printf("Indique a temperatura: ");
					scanf("%d", &num);
					valid=EntreAB2(num,0,50);
				}
				if(cnt==0)
				{
					temperaturas[idx]=num;
					antigo=num;
					cnt++;
				}
				else
				{
					div=antigo/2;
					dobro=antigo*2;
					if(num>dobroTemp || num<divTemp)
					{
						temperaturas[idx]=temp;
						antigo=num;
						temp=num;
						cnt2++;
					}
					else
					{
						if(num>dobro || num<div)
						{
							cnt2++;
							temperaturas[idx]=antigo;
							temp=num;
						}
						else
						{
							temperaturas[idx]=num;
							antigo=num;
							temp=num;
						}
					}
				}
			}
		}
	}
	else
	{
		while(valid!=1)
		{
			printf("Indique a quantidade de valores: ");
			scanf("%d", &qtdV);
			valid=EntreAB(qtdV,10,100);
		}
		for(idx=0;idx<qtdV;idx++)
		{
			printf("Indique a temperatura: ");
			scanf("%d", &num);
			valid=EntreAB2(num,0,50);
			if(valid==1)
			{
				if(cnt==0)
				{
					temperaturas[idx]=num;
					antigo=num;
					cnt++;
				}
				else
				{
					div=antigo/2;
					dobro=antigo*2;
					if(num>dobroTemp || num<divTemp)
					{
						temperaturas[idx]=temp;
						antigo=num;
						temp=num;
						cnt2++;
					}
					else
					{
						if(num>dobro || num<div)
						{
							cnt2++;
							temperaturas[idx]=antigo;
							temp=num;
						}
						else
						{
							temperaturas[idx]=num;
							antigo=num;
							temp=num;
						}
					}
				}
			}
			else
			{
				while(valid!=1)
				{
					printf("Indique a temperatura: ");
					scanf("%d", &num);
					valid=EntreAB2(num,0,50);
				}
				if(cnt==0)
				{
					temperaturas[idx]=num;
					antigo=num;
					cnt++;
				}
				else
				{
					div=antigo/2;
					dobro=antigo*2;
					if(num>dobroTemp || num<divTemp)
					{
						temperaturas[idx]=temp;
						antigo=num;
						temp=num;
						cnt2++;
					}
					else
					{
						if(num>dobro || num<div)
						{
							cnt2++;
							temperaturas[idx]=antigo;
							temp=num;
						}
						else
						{
							temperaturas[idx]=num;
							antigo=num;
							temp=num;
						}
					}
				}
			}
		}
	}

	idx=0;

	printf("Foram encontrados e corrigidos %d erros\n", cnt2);

	for(idx=0;idx<qtdV;idx++)
	{
		printf("%d\n", temperaturas[idx]);
	}

	return 0;
}

int EntreAB(int x, int inf, int sup)
{
	if(x >= inf && x <= sup)
		return 1;
	else
		return 0;
}

int EntreAB2(int x, int inf, int sup)
{
	if(x > inf && x <= sup)
		return 1;
	else
		return 0;
}

