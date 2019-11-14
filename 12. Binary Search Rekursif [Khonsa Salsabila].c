#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

main()
{	
	int data[10] = {2,4,6,8,10,12,14,16,18,20};
	int k, l, total, cari, posisi;

	printf("\t\t\t-------------------------\n");
	printf("\t\t\t  BINARY SEARCH REKURSIF\n");
	printf("\t\t\t-------------------------\n\n");
	total = sizeof(data)/sizeof(data[0]);
	printf("Total Data : %d", total);

	printf("\nMasukkan Angka Yang DiCari : "); 
	scanf("%d", &cari);
    
	posisi = Binary(data, 0, total-1, cari);
    
    if(posisi < 0)
	{
      printf("Angka %d tidak ditemukan", cari);
    }
	
	else 
	{
      printf("Angka %d ditemukan pada indeks ke %d", cari, posisi+1);
    }
    getch();
    return 0;
}

int Binary(int data[], int a, int b, int c)
{
    int nilaitengah = (a+b)/2;
    
	if(a>b)
	{
      return -1;
    } 
    
	else if(data[nilaitengah] == c)
	{
      return nilaitengah;
    }
    
	else if(data[nilaitengah] < c)
	{
      return Binary(data, nilaitengah+1, b, c);
    } 
    
	else 
	{
      return Binary(data, a, nilaitengah-1, c);
    }
}
