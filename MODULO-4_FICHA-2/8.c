#include<stdio.h>
#include<ctype.h>

#define MAX 128

int verUpper(char texto[]);
int verLower(char texto[]);
int verNum(char texto[]);
int verEspeciais(char texto[], char especiais[]);
int verQtd(char texto[]);

int main()
{
	int funcoes=0;

	char especiais[]="#&$£@%!?;:.-_=+*<>\/ˆ˜{}()[]";
	char pass[MAX+1];
	
	printf("Indique a password: ");
	gets(pass);

	funcoes+=verUpper(pass);
	funcoes+=verLower(pass);
	funcoes+=verNum(pass);
	funcoes+=verEspeciais(pass, especiais);

	if(funcoes==4 && verQtd(pass)==1)
	{
		printf("A password %s e forte\n", &pass);
	}
	else
	{
		if(funcoes==2 || funcoes==3 && verQtd(pass)==1)
		{
			printf("A password %s tem forca media\n", &pass);
		}
		else
		{
			printf("A password %s e fraca\n", &pass);
		}
	}

	return 0;
}

int verUpper(char texto[])
{
	int idx;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		if(isupper(texto[idx]))
		{
			return 1;
		}
	}

	return 0;
}

int verLower(char texto[])
{
	int idx;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		if(islower(texto[idx]))
		{
			return 1;
		}
	}

	return 0;
}

int verNum(char texto[])
{
	int idx;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		if(texto[idx]>='0' && texto[idx]<='9')
		{
			return 1;
		}
	}

	return 0;
}

int verEspeciais(char texto[], char especiais[])
{
	int idx, i;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		for(i=0;especiais[i]!='\0';i++)
		{
			if(texto[idx]==especiais[i])
			{
				return 1;
			}
		}
	}
	return 0;
}

int verQtd(char texto[])
{
	int idx;

	for(idx=0;texto[idx]!='\0';idx++)
	{
		if(idx==7)
		{
			return 1;
		}
	}
	
	return 0;
}
