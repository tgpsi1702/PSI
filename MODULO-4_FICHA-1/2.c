#include<stdio.h>

int main()
{
	int par;
	int idx;
	int pos;

	int NumPar[100000];

	printf("Indique a posicao: ");
	scanf("%d", &pos);
	puts("");

	par=2;
	idx=0;

	for(idx=0;idx<pos;idx++)
	{
		NumPar[idx]=par;
		par=par+2;
	}
	
	idx=0;

	while(idx<pos)
	{
		printf("%d\n", NumPar[idx]);
		idx++;
	}

	puts("");

	return 0;
}
