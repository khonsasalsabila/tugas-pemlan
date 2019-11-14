#include <stdio.h>
#include <stdlib.h>

void merge(int low, int mid, int up);
void mergeSort(int low, int up);
int a[50];

int main()
{
	int n,i,batas;
	
	printf("\t\t\t--------------\n");
	printf("\t\t\t  MERGE SORT\n");
	printf("\t\t\t--------------\n\n");
	printf("\n Masukkan Batas: ");
	scanf("%d",&n);
	fflush(stdin);

	if(n<=1)
	{
		printf("\n -------------------");
		printf("\n Batas Terlalu Kecil");
		printf("\n -------------------");
	}
	else if(n>20)
	{
		printf("\n -------------------");
		printf("\n Batas Terlalu Besar");
		printf("\n -------------------");
	}
	else{	
	printf("\n");
	for(i=0;i<n;i++){
		printf(" Masukkan bilangan ke-%d : ",i+1);
		scanf("%d",&a[i]);
		fflush(stdin);
	}
}

printf("\n\n Data sebelum diurutkan : \n");
for(i=0;i<n;i++)
{
	printf(" %d ",a[i]);
}

printf("\n\n Data setelah diurutkan : \n");
mergeSort(0,n);

for(i=1;i<=n;i++)
{
	printf(" %d ",a[i]);
}
	printf("\n\n --------");
	printf("\n SELESAI");
	printf("\n --------");
	getch();
	return 0;
}

void merge(int low, int mid, int up)
{
int h, i,j,k;
int b[50];
h = low;
i = low;
j = mid+1;

while((h<=mid)&&(j<=up))
{
	if(a[h] < a[j]){
		b[i]=a[h];
		h++;
	}
	else{
		b[i]=a[j];
		j++;
	}
	i++;
	}
	if(h>mid)
	{
		for(k=j;k<=up;k++)
		{
			b[i]=a[k];
			i++;
		}
	}
	else{
		for(k=h;k<=mid;k++)
		{
			b[i]=a[k];
			i++;
		}
	}
	for(k=low;k<=up;k++) a[k]=b[k];
}

void mergeSort(int low, int up)
{
int mid;
if(low<up)
{
	mid=(low+up)/2;
	mergeSort(low,mid);
	mergeSort(mid+1,up);
	merge(low,mid,up);
	}
}
