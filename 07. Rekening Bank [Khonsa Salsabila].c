#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alamat
{
	char jalan[30];
	char kota[20];
	char provinsi[20];
};

struct tanggal_lahir
{
	int tanggal;
	int bulan;
	int tahun;
};

struct nasabah
{
	char nama[30];
	long nomer_rekening;
	char bank [10];
	long saldo;
	struct alamat inputalamat;
	struct tanggal_lahir inputlahir;
	
};

typedef struct nasabah nsbh;

int main()
{
	nsbh input[5];
	
	strcpy(input[0].nama, "Yuli Artono");
	input[0].nomer_rekening = 230764;
	strcpy(input[0].bank, "BRI");
	input[0].saldo = 4000000;
	strcpy(input[0].inputalamat.jalan, "Jalan Tuntang");
	strcpy(input[0].inputalamat.kota, "Madiun");
	strcpy(input[0].inputalamat.provinsi, "Jawa Timur");
	input[0].inputlahir.tanggal = 23;
	input[0].inputlahir.bulan = 7;
	input[0].inputlahir.tahun = 1964;

	strcpy(input[1].nama, "Shara Shakinah");
	input[1].nomer_rekening = 100799;
	strcpy(input[1].bank, "BNI");
	input[1].saldo  = 800000;
	strcpy(input[1].inputalamat.jalan, "Jalan Martadinata");
	strcpy(input[1].inputalamat.kota, "Tasikmalaya");
	strcpy(input[1].inputalamat.provinsi, "Jawa Barat");
	input[1].inputlahir.tanggal = 10;
	input[1].inputlahir.bulan = 8;
	input[1].inputlahir.tahun = 1999;
	
	strcpy(input[2].nama, "Ananda Rio Firella");
	input[2].nomer_rekening = 201195;
	strcpy(input[2].bank, "BCA");
	input[2].saldo = 2400000;
	strcpy(input[2].inputalamat.jalan, "Jalan Retawu");
	strcpy(input[2].inputalamat.kota, "Malang");
	strcpy(input[2].inputalamat.provinsi, "Jawa Timur");
	input[2].inputlahir.tanggal = 20;
	input[2].inputlahir.bulan = 11;
	input[2].inputlahir.tahun = 1995;
	
	strcpy(input[3].nama, "Sri Rahayu");
	input[3].nomer_rekening = 241270;
	strcpy(input[3].bank, "BRI");
	input[3].saldo = 1400000;
	strcpy(input[3].inputalamat.jalan, "Jalan Batok");
	strcpy(input[3].inputalamat.kota, "Semarang");
	strcpy(input[3].inputalamat.provinsi, "Jawa Tengah");
	input[3].inputlahir.tanggal = 24;
	input[3].inputlahir.bulan = 12;
	input[3].inputlahir.tahun = 1970;
	
	strcpy(input[4].nama, "Bima Bagas Januarta");
	input[4].nomer_rekening = 120197;
	strcpy(input[4].bank, "Mandiri");
	input[4].saldo = 2800000;
	strcpy(input[4].inputalamat.jalan, "Jalan Simpang Sari");
	strcpy(input[4].inputalamat.kota, "Bandung");
	strcpy(input[4].inputalamat.provinsi, "Jawa Barat");
	input[4].inputlahir.tanggal = 12;
	input[4].inputlahir.bulan = 1;
	input[4].inputlahir.tahun = 1997;
	
	int search, k, pilih, saldo;
	while (pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih !=5)
	{
		printf("  --------------  \n");
		printf(" | MENU PILIHAN | \n");
		printf("  --------------  \n\n");
		printf("1. Tampilkan Data Nasabah  \n");
		printf("2. Cari Nasabah Dengan No Rekening \n");
		printf("3. Akumulasi Saldo Nasabah \n");
		printf("4. Cari Nasabah Dengan Kota \n");
		printf("5. Tampilkan Nasabah Dengan Umur Tertentu \n\n");
		printf("Masukkan Pilihan Anda : ");
		scanf("%d", &pilih);
		
		if(pilih == 1)
		{
			printf("  --------------  \n");
			printf(" | DATA NASABAH | \n");
			printf("  --------------  \n\n");
			for(k = 0; k<4; k++)
			{
				printf("Nama : %s\n",input[k].nama);
				printf("No Rekening : %ld\n", input[k].nomer_rekening);
				printf("Bank : %s\n", input[k].bank);
				printf("Saldo : %ld\n", input[k].saldo);
				printf("Alamat : %s, %s, %s\n", input[k].inputalamat.jalan, input[k].inputalamat.kota, input[k].inputalamat.provinsi);
				printf("Tanggal lahir : %d-%d-%d\n\n", input[k].inputlahir.tanggal, input[k].inputlahir.bulan, input[k].inputlahir.tahun);
			}
		}
	
		else if (pilih == 2)
		{
			printf("Masukkan No Rekening : ");
			scanf("%ld", &search);
			for(k = 0 ; k<4; k++)
			{
				
				if (input[k].nomer_rekening == search)
				{
					printf("\nNama : %s\n",input[k].nama);
					printf("No Rekening : %ld\n", input[k].nomer_rekening);
					printf("Bank : %s\n", input[k].bank);
					printf("Saldo : %ld\n", input[k].saldo);
					printf("Alamat : %s, %s, %s\n", input[k].inputalamat.jalan, input[k].inputalamat.kota, input[k].inputalamat.provinsi);
					printf("Tanggal lahir : %d-%d-%d\n\n\n", input[k].inputlahir.tanggal, input[k].inputlahir.bulan, input[k].inputlahir.tahun);
					break;
				}
			}
		}
		
		else if (pilih == 3)
		{
			long saldo = 0;
			for(k = 0; k<5; k++)
			{
				saldo+=input[k].saldo;
				printf("%2.ld\n", input[k].saldo);
			}
			printf("\nAkumulasi Saldo Nasabah : %2.ld \n", saldo);
		}
		
		else if (pilih == 4)
		{
			char kota[20];
			printf("Masukkan Kota : ", k);
			scanf("%s", &kota);
			for(k = 0 ; k<5; k++)
			{
				
				if (strcmp(input[k].inputalamat.kota, kota)==0)
				{
					printf("\nNama : %s\n",input[k].nama);
					printf("No Rekening : %ld\n", input[k].nomer_rekening);
					printf("Bank : %s\n", input[k].bank);
					printf("Saldo : %ld\n", input[k].saldo);
					printf("Alamat : %s, %s, %s\n", input[k].inputalamat.jalan, input[k].inputalamat.kota, input[k].inputalamat.provinsi);
					printf("Tanggal lahir : %d-%d-%d\n\n\n", input[k].inputlahir.tanggal, input[k].inputlahir.bulan, input[k].inputlahir.tahun);
					break;
				}
			}
			
		}
		
		else if (pilih == 5)
		{
			int umur,tahun,salah=0;
			printf("Masukkan Umur : ", k);
			scanf("%d", &umur);
			for(k=0; k<5; k++)
			{
				tahun = 2019 - umur;
				if(tahun==input[k].inputlahir.tahun)
				{
					printf("\nNama : %s\n",input[k].nama);
					printf("No Rekening : %ld\n", input[k].nomer_rekening);
					printf("Bank : %s\n", input[k].bank);
					printf("Saldo : %ld\n", input[k].saldo);
					printf("Alamat : %s, %s, %s\n", input[k].inputalamat.jalan, input[k].inputalamat.kota, input[k].inputalamat.provinsi);
					printf("Tanggal lahir : %d-%d-%d\n\n\n", input[k].inputlahir.tanggal, input[k].inputlahir.bulan, input[k].inputlahir.tahun);
					salah = 1;
					break;
				}
			}
				if(salah == 0)
				{
					printf("Nasabah Tidak Ditemukan\n\n");
				}
		}
	}
	return 0;
}
