#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k,l,t,hasil;
	
	printf("\t\t\t-----------\n");
	printf("\t\t\t  ITERASI\n");
	printf("\t\t\t-----------\n\n");
	printf("Bilangan\t\t: ");
	scanf("%d", &k);
	printf("Pangkat Bilangan\t: ");
	scanf("%d", &l);
	
	for(t=1; t<=l; t++)
	hasil = hasil*k;2;
	printf("\n---------------------------");
	printf("\nHasil Bilangan %d ^ %d = %d", k,l,hasil);
	printf("\n---------------------------");
	return 0;
}

