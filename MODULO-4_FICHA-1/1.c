#include<stdio.h>
#include<stdlib.h>

int main()
{
	int par;
	int idx;

	int NumPar[150];

	par=2;
	idx=0;

	system("pause");
	puts("");

	for(idx=0;idx<150;idx++)
	{
		NumPar[idx]=par;
		par=par+2;
	}
	
	idx=0;

	while(idx<=149)
	{
		printf("%d\n", NumPar[idx]);
		idx++;
	}

	puts("");

	return 0;
}
