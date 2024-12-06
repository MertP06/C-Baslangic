#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayilar[50];
	int i;
	float ortalama;
	int ortalamaust=0;
	int ortalamaalt=0;
	int toplam=0;
	int sayiadedi=0;
	int sayi;
	
	printf("KAC ADET SAYI GIRECEKSINIZ: ");
	scanf("%d",&sayi);
	printf("\n\n");
	
	for(i=0;i<sayi;i++)
	{
		printf("%d. SAYIYI GIRINIZ: ",i+1);
		scanf("%d",&sayilar[i]);
		sayiadedi++;
		toplam=toplam+sayilar[i];
	}
	
	printf("\n\n");
	printf("GIRMIS OLDUGUNUZ SAYILARIN TOPLAMI: %d\n",toplam);
	ortalama=(float)toplam/sayiadedi;
	printf("GIRMIS OLDUGUNUZ SAYILARIN ORTALAMASI: %f",ortalama);
	
	for(i=0;i<sayi;i++)
	{
		if(sayilar[i]<ortalama)
		{
			ortalamaalt++;
		}
		if(sayilar[i]>ortalama)
		{
			ortalamaust++;
		}
	}
	printf("\n\n");
	printf("ORTALAMANIN ALTINDA KALAN SAYI ADEDI: %d\n",ortalamaalt);
	printf("ORTALAMANIN USTUNDE KALAN SAYI ADEDI: %d\n",ortalamaust);
	return 0;
}
