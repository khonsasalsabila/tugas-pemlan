#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kontainer
{
	int kon;
	int ukuran;
	int berat;
	char vendor[20];
	char jenis_muatan[20];
};
typedef struct kontainer kntnr;

int main()
{
	kntnr input[9];
	
	input[0].kon = 1;
	input[0].ukuran = 20;
	input[0].berat = 100;
	strcpy(input[0].vendor, "Meratus");
	strcpy(input[0].jenis_muatan, "Electronics");
	
	input[1].kon = 2;
	input[1].ukuran = 40;
	input[1].berat = 150;
	strcpy(input[1].vendor, "Mearsk");
	strcpy(input[1].jenis_muatan, "Electronics");
	
	input[2].kon = 3;
	input[2].ukuran = 20;
	input[2].berat = 100;
	strcpy(input[2].vendor, "Meratus");
	strcpy(input[2].jenis_muatan, "Goods");
	
	input[3].kon = 4;
	input[3].ukuran = 60;
	input[3].berat = 200;
	strcpy(input[3].vendor, "Meratus");
	strcpy(input[3].jenis_muatan, "Goods");
	
	input[4].kon = 5;
	input[4].ukuran = 20;
	input[4].berat = 100;
	strcpy(input[4].vendor, "Mearsk");
	strcpy(input[4].jenis_muatan, "Chemical");
	
	input[5].kon = 6;
	input[5].ukuran = 60;
	input[5].berat = 200;
	strcpy(input[5].vendor, "Pelni Logistics");
	strcpy(input[5].jenis_muatan, "Electronics");
	
	input[6].kon = 7;
	input[6].ukuran = 40;
	input[6].berat = 150;
	strcpy(input[6].vendor, "Mearsk");
	strcpy(input[6].jenis_muatan, "Chemical");
	
	input[7].kon = 8;
	input[7].ukuran = 40;
	input[7].berat = 150;
	strcpy(input[7].vendor, "Pelni Logistics");
	strcpy(input[7].jenis_muatan, "Goods");
	
	input[8].kon = 9;
	input[8].ukuran = 20;
	input[8].berat = 100;
	strcpy(input[8].vendor, "Meratus");
	strcpy(input[8].jenis_muatan, "Electronics");
	
	char jenis[20];
	int k;
	printf("Masukkan Jenis Muatan : ", k);
	scanf("%s", &jenis);
	for(k = 0 ; k<9; k++)
	{
		if (strcmp(input[k].jenis_muatan, jenis)==0)
		{
			printf("\nKon : %d\n",input[k].kon);
			printf("Ukuran : %d\n", input[k].ukuran);
			printf("Berat : %d\n", input[k].berat);
			printf("Vendor : %s\n", input[k].vendor);
			printf("Jenis Muatan : %s\n", input[k].jenis_muatan);
			break;
		}
	}
	return 0;
}
