#include <stdio.h>
#include <stdlib.h>

int pangkat(int k, int s)
{
	if(s == 0)
	{
		return 1;
	}
	else
	if (s == 1)
	{
		return k;
	}
	else
	{
		return k*pangkat(k, s-1);
	}
}

int main()
{
	int k,s;
	printf("\t\t\t------------\n");
	printf("\t\t\t  REKURSIF\n");
	printf("\t\t\t------------\n\n");
	printf("Bilangan\t\t: ");
	scanf("%d", &k);
	printf("Pangkat Bilangan\t: ");
	scanf("%d", &s);
	printf("\n---------------------------");
	printf("\nHasil Bilangan %d ^ %d = %d", k,s,pangkat(k,s));
	printf("\n---------------------------");
	return 0;
}
