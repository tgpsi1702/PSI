#include<stdio.h>
#include<math.h>

int EntreAB(int x, int inf, int sup);

int main()
{
	int valid;
	int idx;
	int cnt;
	int lum;
	int opening;
	int elevado;

	int luminusidade[60];
	int abertura[60];

	cnt=0;

	for(idx=0;idx<59;idx++)
	{
		printf("Indique a luminusidade: ");
		scanf("%d", &lum);
		valid=EntreAB(lum,0,100);
		if(valid==1)
		{
			luminusidade[idx]=lum;
			if(lum<20)
			{
				abertura[idx]=0;
			}
			else
			{
				if(luminusidade[idx]-15>luminusidade[idx-1])
				{
					opening=abertura[idx-1];
					abertura[idx]=opening;
				}
				else
				{
					elevado=pow((double)lum,2);
					opening=100-(0.0075*elevado);
					abertura[idx]=opening;
				}
			}
		}
		else
		{
			while(valid!=1)
			{
				puts("VALOR INVALIDO!\n");
				printf("Indique a luminusidade: ");
				scanf("%d", &lum);
				valid=EntreAB(lum,0,100);
			}
			luminusidade[idx]=lum;
			if(lum<20)
			{
				abertura[idx]=0;
			}
			else
			{
				if(luminusidade[idx]-15>luminusidade[idx-1])
				{
					opening=abertura[idx-1];
					abertura[idx]=opening;
				}
				else
				{
					elevado=pow((double)lum,2);
					opening=100-(0.0075*elevado);
					abertura[idx]=opening;
				}
			}
		}
	}

	for(idx=0;idx<9;idx++)
	{
		printf("%d\n", abertura[idx]);
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