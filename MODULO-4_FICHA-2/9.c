#include<stdio.h>
#include<string.h>

#define MAX 100

void Mutacao(char adn[], char temp[]);

int main()
{
	int idx;

	char ADN[MAX+1];
	char temp[MAX+1];

	printf("Indique o ADN: ");
	gets(ADN);

	strcpy(temp, ADN);

	Mutacao(ADN, temp);

	for(idx=0;ADN[idx]!='#';idx++)
	{
		printf("%c", ADN[idx]);
	}

	puts("");

	return 0;
}

void Mutacao(char adn[], char temp[])
{
	int idx;

	for(idx=0;temp[idx]!='#';idx++)
	{
		if(temp[idx]==temp[idx+1])
		{
			continue;
		}
		else
		{
			switch(temp[idx+1])
			{
			case 'a':
				if(temp[idx]!='c')
				{
					adn[idx+1]='c';
					break;
				}
				else
				{
					adn[idx+1]='t';
					break;
				}
			case 'c':
				if(temp[idx]!='t')
				{
					adn[idx+1]='t';
					break;
				}
				else
				{
					adn[idx+1]='a';
					break;
				}
			case 't':
				if(temp[idx]!='a')
				{
					adn[idx+1]='a';
					break;
				}
				else
				{
					adn[idx+1]='c';
					break;
				}
			}
		}
	}
}