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

	int numPrim[150];

	num=2;
	idx=0;

	system("pause");

	while(idx<=149)
	{
		if(num==2)
		{
			antigo=2;
		}
		num++;
		final=Primo(num);
		if(final==1)
		{
			atual=num;
			dif=atual-antigo;
			numPrim[idx]=dif;
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
			antigo=num;
			idx++;
		}
	}

	idx=0;

	while(idx<=149)
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
		// os primos são > 1
		return 0;
	if(num == 2)
		return 1;
	else
	{
		if(num % 2 == 0)
			// o único número par primo é o 2
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