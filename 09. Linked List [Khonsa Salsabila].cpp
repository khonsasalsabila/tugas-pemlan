#include <stdio.h>
#include <conio.h>
#include <stdlib.h>          

struct node 
{
	int data;
    struct node *next;
};

typedef struct node node;

node *createNode(void);
void tambahAwal(node **head);
void tambahAkhir(node **head);
void tambahData(node **head);
void tranverse(node *head);
void insertNode(node **head, node *pPre, node *pNew);
void deleteNode(node **head, node *pPre, node *pCur);
void hapusData(node **head);
void hapusDataAwal(node **head);
void hapusDataAkhir(node **head);
void deleteList(node *head);
void total(node *head);

int main()
{
	node *head;
	char pilih;

	head = NULL;
	do
	{
    	system("cls");
		
		printf("----------------\n");
    	printf("| MENU PILIHAN |\n");
    	printf("----------------\n\n");
    	printf("1. Tambah Data Di Awal\n");
    	printf("2. Tambah Data Di Akhir\n");
    	printf("3. Tambah Data Di Tengah List\n");
    	printf("4. Hapus Data\n");
    	printf("5. Hapus Data Di Awal\n");
    	printf("6. Hapus Data Di Akhir\n");
    	printf("7. Total Semua Data\n");
    	printf("8. Cetak Isi List\n\n");
    	printf("Masukkan Pilihan (tekan q untuk keluar) : ");
    
		fflush(stdin);
    	scanf("%c", &pilih);
    	
    	if (pilih == '1')
     		tambahAwal(&head);
     	else if (pilih == '2')
			tambahAkhir(&head);
    	else if (pilih == '3')
     		tambahData(&head);
    	else if (pilih == '4')
		{
     		hapusData(&head);
        	getch();
    	}
     	else if (pilih == '5')
		{
			hapusDataAwal(&head);
        	getch();
		}
		else if (pilih == '6')
		{
			hapusDataAkhir(&head);
        	getch();
		}
		else if (pilih == '7')
		{
     		total(head);
        	getch();
  	 	}
	 	else if (pilih == '8')
		{
     		tranverse(head);
         	getch();
  	 	}   
  
	}
	while (pilih != 'q');
  	deleteList(head);
}
//--------------------------------------------------------

node *createNode(void)
{
  node *ptr;

  ptr = (node *)malloc(sizeof(node));
  return(ptr);
}

//--------------------------------------------------------

void tambahAwal(node **head)
{
  int bil;
  node *pTemp;

  system("cls");
  
  fflush(stdin);
  printf("Bilangan Integer : ");
  fflush(stdin);
  scanf("%d", &bil);
  pTemp = (node *)malloc(sizeof(node));

  if (pTemp != NULL)
  {
  	pTemp->data = bil;
    pTemp->next = NULL;
    insertNode(head, NULL, pTemp);
  }
  else
  {
    printf("Alokasi Memori Gagal");
    getch();
  }
}

//--------------------------------------------------------

void tambahAkhir(node **head)
{
	node *tambah,*pTemp;
	int bil;
	system("cls");
	tambah = *head;
	pTemp = NULL;
	fflush(stdin);
  	printf("Bilangan Integer : ");
  	fflush(stdin);
  	scanf("%d", &bil);
  	pTemp = (node *)malloc(sizeof(node));
  	
	if (pTemp == NULL)
	{
	  	printf("\nAlokasi Memeori gagal");
		getch();
		return ;
	}
  	//Awal
  	if(*head == NULL)
	{
		 pTemp->data = bil;
	     pTemp->next = NULL;
	     insertNode(head, NULL, pTemp);
	}
	//Akhir
	else 
	{
		while(tambah != NULL && tambah -> next != NULL)
		{
			tambah = tambah -> next;
		}
		pTemp->data = bil;
		pTemp->next = NULL;
		insertNode(head, tambah, pTemp);
	}			
}

//--------------------------------------------------------

void tambahData(node **head)
{
  int pos, bil;
  node *pTemp, *pCur;
  
  system("cls");
  
  tranverse(*head);
  printf("\nPosisi Penyisipan Setelah Data Bernilai : ");
  fflush(stdin);
  scanf("%d", &pos);
  printf("\nData Yang Disisipkan : ");
  fflush(stdin);
  scanf("%d", &bil);

  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) 
  {
    pCur = pCur -> next;
  }

  pTemp = (node *)malloc(sizeof(node));

  if (pCur == NULL)
  {
     printf("\nNode Tidak Ditemukan");
     getch();
  }
  else if (pTemp == NULL)
  {
     printf("\nAlokasi Memeori Gagal");
     getch();
  }
  else
  {
     pTemp->data = bil;
     pTemp->next = NULL;
     insertNode(head, pCur, pTemp);
  }
}

//--------------------------------------------------------

void tranverse(node *head)
{
	node *pWalker;

    system("cls");
	pWalker = head;
	while (pWalker != NULL)
	{
   		printf("%d->", pWalker -> data);
   		pWalker = pWalker -> next;
	}
   printf("NULL");
}

//--------------------------------------------------------

void insertNode(node **head, node *pPre, node *pNew)
{
    if (pPre == NULL)
	{
       //menambahkan diawal atau pada empty list
	    pNew -> next = *head;
       *head = pNew;
    }
    else 
	{
       //menambahkan node di tengah atau di akhir
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}

//--------------------------------------------------------

void deleteNode(node **head, node *pPre, node *pCur)
{
	if (pPre == NULL)
	   *head = pCur -> next;
	else
       pPre -> next = pCur -> next;
	free(pCur);
}

//--------------------------------------------------------

void hapusData(node **head)
{
  int pos;
  node *pCur, *pPre;

  system("cls");
  tranverse(*head);
  printf("\nData Yang Akan Dihapus : ");
  fflush(stdin);
  scanf("%d", &pos);

  pPre = NULL;
  pCur = *head;
  //cari target value sampai ditemukan atau sampai pada akhir list
  while (pCur != NULL && pCur -> data != pos) 
  {
    pPre = pCur;
    pCur = pCur -> next;
  }

  if (pCur == NULL)
  {
     printf("\nNode Tidak Ditemukan");
     getch();
  }
  else
     deleteNode(head, pPre, pCur);
}

//--------------------------------------------------------

void deleteList(node *head)
{
  node *pTemp;


  while(head != NULL)
  {
     pTemp = head;
     head = head->next;
     free(pTemp);
  }
}

//--------------------------------------------------------

void hapusDataAwal(node **head)
{
	node *pTemp;
	system("cls");
	if (*head != NULL)
	{
		pTemp = *head;	
		*head = pTemp -> next;
		free(pTemp);
		printf("Data Awal Sukses Dihapus");
	}
	else printf("NULL");
}

//--------------------------------------------------------

void hapusDataAkhir(node **head)
{
	node *pTemp;
	node *pAkhir;
	system("cls");
	if (*head != NULL)
	{
		pAkhir = *head;
		pTemp = NULL;
		while (pAkhir -> next != NULL)
		{
			pTemp = pAkhir;	
			pAkhir = pAkhir -> next;
		}
		deleteNode(head, pTemp, pAkhir);
		printf("Sukses Menghapus Data Akhir");
	}
	else printf("NULL");
}

//--------------------------------------------------------

void total(node *head)
{
    node *pWalker;
    int sum;
    system("cls");
    pWalker = head;
    while (pWalker != NULL)
	{
        printf("%d + ", pWalker -> data);
        sum = sum + pWalker -> data;
        pWalker = pWalker -> next;
    }
   printf("NULL");
   printf("\nJumlah = %d",sum);
}

