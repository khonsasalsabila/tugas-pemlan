#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

struct data_mahasiswa
{
	int npm;
	float ipk;
};
typedef struct data_mahasiswa mhs;

int main()
{
	int k;
	int cari;
	
	mhs data[5];
	data[0].npm = 120;
	data[0].ipk = 3.60;

	data[1].npm = 121;
	data[1].ipk = 3.80;
	
	data[2].npm = 122;
	data[2].ipk = 3.90;
	
	data[3].npm = 123;
	data[3].ipk = 3.70;
	
	data[4].npm = 124;
	data[4].ipk = 4.00;

	printf("Data Mahasiswa (A-Z) : \n\n");
	for(k= 0 ; k<5 ; k++)
	{
		printf("%d = %f \n\n", data[k].npm, data[k].ipk);	
	}
	
	printf("Data Mahasiswa (Z-A) : \n\n");
	for(k = 4 ; k>=0; k--)
	{
		printf("%d = %f \n\n", data[k].npm, data[k].ipk);	
	}
	
	printf("Masukkan NPM : ");
	scanf("%d", &cari);
	for(k = 0; k<5; k++)
	{
		if (data[k].npm == cari)
		{
			printf("IPK dari NPM %d = %f \n\n", data[k].npm, data[k].ipk);	
			break;
		}
	}
	return 0;
}
