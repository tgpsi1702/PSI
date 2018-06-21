#include<stdio.h>
#define MAX 150

int main()
{
	int num;
	int qtd;
	int idx, index;
	int temp;
	int cnt, cnt2, cnt3;
	int mediana, medianaAUX;
	double medianaP;

	int Nums[MAX];

	cnt=1;
	
	printf("Indique a quantidade de valores: ");
	scanf("%d", &qtd);

	for(idx=0;idx<qtd;idx++)
	{
		printf("Indique o numero: ");
		scanf("%d", &num);
		Nums[idx]=num;
		index=idx;
		cnt=1;
		cnt2=index;
		cnt3=0;
		if(idx>=1)
		{
			while(cnt2!=0)
			{
				if(num<Nums[index-cnt])
				{
					temp=Nums[index-cnt];
					Nums[index-cnt]=num;
					Nums[index-cnt3]=temp;
					cnt++;
					cnt3++;
				}
				else
				{
					break;
				}
				cnt2--;
			}
		}
	}


	for(idx=0;idx<qtd;idx++)
	{
		printf("%d\n", Nums[idx]);
	}

	if(qtd%2!=0)
	{
		medianaAUX=(qtd-1)/2;
		mediana=Nums[medianaAUX];
		printf("\nA mediana e: %d\n\n", mediana);
	}
	else
	{
		medianaAUX=qtd/2;
		medianaP=(Nums[medianaAUX-1]+Nums[medianaAUX])/2.0;
		printf("\nA mediana e: %.3lf\n\n", medianaP);
	}


	return 0;
}