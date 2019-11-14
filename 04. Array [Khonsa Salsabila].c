#include <stdio.h>
#include <conio.h>

int main()
{
	int k, cari;
	int npm[5] = {120, 121, 122, 123, 124};
	float ipk[8] = {3.60, 3.80, 3.90, 3.70, 4.00};
		
			printf("Data Mahasiswa (A-Z) : \n\n");
			for(k = 0; k<5; k++)
			{
				printf("Npm : %d\n", npm[k]);
				printf("IPK : %f\n\n", ipk[k]);
			}
			
			printf("Data Mahasiswa (Z-A) : \n\n");
			for(k = 4 ; k>=0; k--)
			{
				printf("Npm : %d\n", npm[k]);
				printf("IPK : %f\n\n", ipk[k]);	
			}	

			printf("Masukkan NPM : ");
			scanf("%d", &cari);
			for(k = 0; k<=5; k++)
			{
				if(npm[k] == cari)
				{
					printf("Npm : %d\n", npm[k]);
					printf("IPK : %f\n\n", ipk[k]);
					break;
				}				 
			}
	return 0;
}
