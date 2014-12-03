/*
Odev No:2
*/

#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h> 
# include<stdlib.h>
# include<conio.h>
# include<time.h>

void JetonSayisiGoruntuleme(int hazne[]);
void HistogramCizdirme(int hazne[]);

void main()
{
	int jetonsayisi;
	printf("Atmak istediginiz jeton sayisini giriniz: ");
	scanf("%d", &jetonsayisi);

	srand(time(NULL));
	int jeton[BUFSIZ] = { 0 };
	int hazne[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int j, sayi = 0, ihtimal = 0, hazne1 = 0;
	//ba�ta t�m jetonlar� ayn� anda ats�n tu�a basmaya u�ra�mayal�m diye d���nd�m ama random u bios saatinden ald��� i�in �yle yap�nca bi anda t�m jetonlar ayn� hazneye d���yor
	//at�lan jeton say�s� kadar d�nd�r�yor
	for (j = 0; j<jetonsayisi; j++)
	{
		printf("\n%2d.jetonu atmak icin enter tusuna basiniz:\n", j + 1);
		getchar();
		//bu d�ng� 9 basamakta 2 ihtimalle kar��la�an jetonlara rastgele ihtimal atanarak hangi hazneye ula�t���n� hesaplamak i�in
		for (int h = 0; h<10; h++)
		{
			sayi = rand() % 2;
			if (sayi == 1)
				ihtimal++;
		}
		//jetonun hangi hazneye d��t��� saklan�yor
		if (ihtimal == 9)
			hazne[9]++;
		else if (ihtimal == 8)
			hazne[8]++;
		else if (ihtimal == 7)
			hazne[7]++;
		else if (ihtimal == 6)
			hazne[6]++;
		else if (ihtimal == 5)
			hazne[5]++;
		else if (ihtimal == 4)
			hazne[4]++;
		else if (ihtimal == 3)
			hazne[3]++;
		else if (ihtimal == 2)
			hazne[2]++;
		else if (ihtimal == 1)
			hazne[1]++;
		else if (ihtimal == 0)
			hazne[0]++;
		hazne1 = ihtimal;
		printf("\tJeton %d.hazneye dustu..", hazne1);
		printf("\n");
		ihtimal = 0;
	}
	JetonSayisiGoruntuleme(hazne);
	HistogramCizdirme(hazne);
	getchar();
}


void JetonSayisiGoruntuleme(int hazne[])
{
	system("CLS");
	printf("Haznelerdeki Toplam Jeton sayilari\n\n");
	//bu d�ng� 0. hazneden ba�layarak haznelerdeki jeton say�s�n� yazd�r�yor
	for (int h = 0; h<10; h++)
	{
		printf("%d.haznedeki jeton sayisi: %d\n", h, hazne[h]);
	}
	printf("\n");

}


void HistogramCizdirme(int hazne[])
{
	int max = 0;
	int hist;
	//histogram�n boyutu i�in max de�eri buluyor
	for (int k = 0; k<10; k++)
	{
		if (hazne[k]>max)
			max = hazne[k];
	}
	printf("Jetonlarin Histogram Seklinde Dagilimlari\n\n");
	printf("+----+---+---+---+---+---+---+---+---+---+---+\n");
	//sat�r say�s� belirlendikten sonra cizimi yap�yor
	for (hist = max; hist > 0; hist--)
	{
		printf("|%3d |", hist);
		for (int l = 0; l<10; l++)
		{
			if (hist > hazne[l])
				printf("   |");
			else
				printf(" O |");
		}
		printf("\n");
	}
	printf("+----+---+---+---+---+---+---+---+---+---+---+\n");
	printf("|    | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |\n");
	printf("+----+---+---+---+---+---+---+---+---+---+---+\n");
}
