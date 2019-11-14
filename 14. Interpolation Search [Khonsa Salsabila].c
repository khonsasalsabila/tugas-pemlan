#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[8], i, j, k, tkr, low, high, pos, tm;
	
	printf("\t\t\t------------------------\n");
	printf("\t\t\t  INTERPOLATION SEARCH\n");
	printf("\t\t\t------------------------\n\n");
    for(i=0;i<8;i++)
    {
        printf("Data ke-%d : ",i+1);
        scanf("%d",&A[i]);
    }
        
	printf("\nMasukkan data yang anda cari : ");
    scanf("%d",&k);

    for(i=0;i<8;i++)
	{
        for(j=i+1;j<8;j++)
		{
            if (A[i]>A[j])
			{
                tkr=A[i]; A[i]=A[j]; A[j]=tkr;
            }
        }
    }
    
    tm=0;
    high=7; low=0; 
	
	do
    {
        pos = ((k - A[low]) / (A[high] - A[low]))*(high-low) +  low;
        if (A[pos] == k)
		{
            tm++;
            break;
        }
        if (A[pos] > k)
        	high = pos-1;
        else if (A[pos] < k)
        	low = pos + 1;
    }
    while(k >= A[low] && k <= A[high]);
        if (tm>0)
		{
			printf("------------------------------------\n");
            printf(" Data %d yang dicari ada dalam array\n",k);
            printf("------------------------------------\n");
        }
		else
		{
			printf("--------------------------------\n");
        	printf("Data tidak ditemukan dalam array\n");
        	printf("--------------------------------\n");
		}
 
    return(0);
}
