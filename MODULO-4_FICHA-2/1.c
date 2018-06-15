#include<stdio.h>
#include<string.h>
#define MAX 80

int Maiusculas(char texto[]);

int main()
{
	int maiusculas, naoChar;

	char texto[MAX+1];

	printf("Indique o texto: ");
	gets(texto);

	maiusculas=Maiusculas(texto);
	naoChar=NaoChar(texto);

	printf("Ha %d maiusculas e %d outros caracteres\n", maiusculas, naoChar);

	return 0;
}

int Maiusculas(char texto[])
{
	int idx;
	int cnt=0;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		if(texto[idx]>='a' && texto[idx]<='z')
		{
			continue;
		}
		else
		{
			if(texto[idx]>='A' && texto[idx]<='Z')
			{
				cnt++;
			}
			else
			{
				continue;
			}
		}
	}

	return cnt;
}

int NaoChar(char texto[])
{
	int idx;
	int cnt=0;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		if(texto[idx]>='a' && texto[idx]<='z' || texto[idx]>='A' && texto[idx]<='Z' || texto[idx]>='0' && texto[idx]<='9')
		{
			continue;
		}
		else
		{
			cnt++;
		}
	}

	return cnt;
}