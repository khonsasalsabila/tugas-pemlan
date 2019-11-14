#include <stdio.h>
#include <stdlib.h>


int main()
{
	int data[8] = {8, 10, 6, -2, 11, 7, 1, 100};
	int i, cari, flag=0;
	
	printf("\t\t\t---------------------\n");
	printf("\t\t\t  SEQUENTIAL SEARCH\n");
	printf("\t\t\t---------------------\n\n");
	printf("Masukkan data yang dicari: ");
	scanf("%d", &cari);
	
	for(i=0; i<8; i++)
	{
		if(data[i]==cari)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
	printf("Data yang anda cari ditemukan pada index ke-%d", i);
	else
	printf("Data yang anda cari tidak ditemukan");
	
	getch();
	return 0;
}
