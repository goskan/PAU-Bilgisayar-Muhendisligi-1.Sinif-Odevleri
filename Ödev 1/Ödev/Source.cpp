/*
Odev No:1
*/
//scanf fonksiyonunda uyarý ile karþýlaþýrsak aþaðýdaki define iþlemini uygulayabiliriz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void ucgenCiz(int a);
void kareCiz(int b);
void dikdortgenCiz(int c , int d);
void edortgenCiz(int e);
void paralelkenarCiz(int f);

void main()
{
	int secim,boyut,en;
	printf("--------Geometrik Cisim Cizdirme Programi--------\n\n");
	//programýn tekrarý için
	for (;;)
	{	//bu döngü hatalý seçimde baþa sarmak için
		for (;;)
		{
			printf("Cizdirmek Istediginiz Cismi Seciniz\n\n");
			printf("1.Ucgen\n");
			printf("2.Kare\n");
			printf("3.Dikdortgen\n");
			printf("4.Eskenar Dortgen\n");
			printf("5.Paralelkenar\n");
			printf("0.Cikis\n\n");
			printf("Seciminiz:");
			scanf("%d", &secim);
			//bu durumlarda sonsuz döngünün dýþýna çýkýyor
			if (secim == 1 || secim == 2 || secim == 3 || secim == 4 || secim == 5 || secim == 0)
				break;
			else
			{
				system("cls");
				// "\a" yý uyarý sesi olarak kullanabiliriz
				printf("Hatali Bir Secim Yaptiniz!!\a\n\n");
				continue;
			}
		}
		switch (secim)
		{
		case 1:
			system("cls");
			printf("Ucgenin Boyutu: ");
			scanf(" %d", &boyut);
			ucgenCiz(boyut);
			break;
		case 2:
			system("cls");
			printf("Karenin Boyutu: ");
			scanf(" %d", &boyut);
			kareCiz(boyut);
			break;
		case 3:
			system("cls");
			printf("Dikdortgenin Boyu: ");
			scanf(" %d", &boyut);
			printf("Dikdortgenin Eni: ");
			scanf(" %d", &en);
			dikdortgenCiz(boyut, en);
			break;
		case 4:
			system("cls");
			//bu döngü eskenar dörtgen için çift sayý girilme durumunda baþa sarmak için
			for (;;)
			{
				printf("Eskenar Dortgenin Boyutu: ");
				scanf(" %d", &boyut);
				if (boyut % 2 == 1)
					break;
				else
					system("cls");
					printf("Lutfen Tek Sayi Giriniz..\a\n");
			}
			edortgenCiz(boyut);
			break;
		case 5:
			system("cls");
			printf("Paralelkenarin Boyutu: ");
			scanf("%d", &boyut);
			paralelkenarCiz(boyut);
			break;
		case 0:
			break;
		}
		
		//programdan cýkýs
		if (secim == 0)
			break;
		_getch();
		
		system("cls");
	}
}

void ucgenCiz(int boy)
{
	int i , j;

	for (i = 0; i < boy; i++)
		{
			for (j = 0; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	printf("\nDevam etmek icin bi tusa basiniz..");
}

void kareCiz(int boy)
{
	int i, j;

	for (j = 0; j<boy; j++)
	{
		for (i = 0; i<boy; i++)
		{
			printf("*");
		}

		printf("\n");
	}
	printf("\nDevam etmek icin bi tusa basiniz..");
}

void dikdortgenCiz(int boy, int en)
{
	int i, j;

	for (j = 0; j<boy; j++)
	{
		for (i = 0; i<en; i++)
		{
			printf("*");
		}

		printf("\n");
	}
	printf("\nDevam etmek icin bi tusa basiniz..");
}

void edortgenCiz(int boy)
{
	int i, j;
	for (i = 1; i<boy+1; i += 2)
	{
		for (j = 0; j<boy - i / 2; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
		
			printf("*");
		} 
		printf("\n");
	}

	for (i = boy-2; i>0; i -= 2)
	{

		for (j = 0; j < boy - i / 2; j++)
		{
			printf(" ");
		}

		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\nDevam etmek icin bi tusa basiniz..");
}

void paralelkenarCiz(int boy)
{
	int i, j, k;
	
	for (j = 0; j< boy; j++)
	{
		for (k = 0; k < boy - 1 - j; k++)
		{
			printf(" ");
		}

		for (i = 0; i< boy; i++)
		{
			printf("*");
		}

		printf("\n");
	}
	printf("\nDevam etmek icin bi tusa basiniz..");
}