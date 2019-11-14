#include <stdio.h>
#include <stdlib.h>

int angka[10]={36,6,20,5,8,18,72,3,44,1};
int a,b;

void main()
{
	for(a=0; a<10; a++)
	{
		int indexNilaiMinimal=a;
		for(b=a; b<10; b++)
		{
			if(angka[b]<angka[indexNilaiMinimal])
			{
				indexNilaiMinimal=b;
			}
		}
		int temp=angka[a];
		angka[a]=angka[indexNilaiMinimal];
		angka[indexNilaiMinimal]=temp;
	}
	for(a=0; a<10; a++)
	{
		printf("%d ", angka[a]);
	}
	getchar();
}
