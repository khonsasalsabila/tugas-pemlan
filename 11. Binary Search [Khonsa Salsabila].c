#include <stdio.h>

int main()
{
	int data[10]={2,4,6,8,10,12,14,16,18,20};
	int cari, flag=0, awal, tengah, akhir;
	awal=0;
	akhir=10;
	
	printf("\t\t\t-----------------\n");
	printf("\t\t\t  BINARY SEARCH\n");
	printf("\t\t\t-----------------\n\n");
	printf("Masukkan data yang dicari :");
	scanf("%d", &cari);
	while (awal<=akhir && flag ==0)
	{
		tengah=(awal+akhir)/2;
		if
		(data[tengah]==cari)
		{
			flag=1;
			break;
		}
		else if
		(data[tengah]<cari)
		{
			awal=tengah+1;
			printf("Kanan\n");
			break;
		}
		else
		{
			akhir=tengah-1;
			printf("Kiri\n");
			break;
		}
	}
	if(flag=1)
	printf("Terdapat Data");
	else
	printf("Tidak Terdapat Data");
}
