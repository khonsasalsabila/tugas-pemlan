#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char Nama_Lengkap[30], Nama_Panggilan[15];
	char Tempat_Lahir[20], Tanggal[15], Bulan[10], Tahun[15];
	char Jurusan[20], Fakultas [20], Alamat_Rumah[60], Email[30];
	char NPM[15], No_HP[15],Jenis_Kelamin[15], Agama[15], Golongan_Darah[5];

	printf("                   -------------------------------                               \n");
	printf("                            INPUT BIODATA                                        \n");
	printf("                   -------------------------------                               \n\n\n");
	
	printf("NPM\t\t: ");
	gets(NPM);
	printf("Jurusan\t\t: ");
	gets(Jurusan);
	printf("Fakultas\t: ");
	gets(Fakultas);
	printf("Nama Lengkap\t: ");
	gets(Nama_Lengkap);
	printf("Nama Panggilan\t: ");
	gets(Nama_Panggilan);
	printf("Tempat Lahir\t: ");
	gets(Tempat_Lahir);
	printf("Tanggal Lahir\t: ");
	gets(Tanggal);
	printf("Bulan Lahir\t: ");
	gets(Bulan);
	printf("Tahun Lahir\t: ");
	gets(Tahun);
	printf("Alamat Rumah\t: ");
	gets(Alamat_Rumah);
	printf("Jenis Kelamin\t: " );
	gets(Jenis_Kelamin);
	printf("Agama\t\t: ");
	gets(Agama);
	printf("Golongan Darah\t: ");
	gets(Golongan_Darah);
	printf("No. HP\t\t: ");
	gets(No_HP);
	printf("Email\t\t: ");
	gets(Email);
	
	system("cls");
	system("color 75");
	
	printf("                   -------------------------------                               \n");
	printf("                               BIODATA                                 \n");
	printf("                   -------------------------------                               \n\n\n");
	
	printf("NPM\t\t\t: %s \n", NPM);
	printf("Jurusan\t\t\t: %s \n", Jurusan);
	printf("Fakultas\t\t: %s \n", Fakultas);
	printf("Nama Lengkap\t\t: %s \n", Nama_Lengkap);
	printf("Nama Panggilan\t\t: %s \n", Nama_Panggilan);
	printf("TTL\t\t\t: %s, %s %s %s \n", Tempat_Lahir,Tanggal,Bulan,Tahun);
	printf("Alamat Rumah\t\t: %s \n", Alamat_Rumah);
	printf("Jenis Kelamin\t\t: %s  \n", Jenis_Kelamin);
	printf("Agama\t\t\t: %s  \n", Agama);
	printf("Golongan Darah\t\t: %s \n", Golongan_Darah);
	printf("No. HP\t\t\t: %s \n", No_HP);
	printf("Email\t\t\t: %s \n", Email);
	return 0;
}
