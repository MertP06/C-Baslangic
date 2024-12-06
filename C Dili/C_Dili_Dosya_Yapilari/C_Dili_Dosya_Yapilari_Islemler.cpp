#include <stdio.h>
#include <stdlib.h>

void okuVeriSeti(const char *veridosyasi, int *deger1, float *deger2, double *deger3) // veriler.txt dosyasýndan verilerin okunduðu fonksiyon
{
    FILE *dosya = fopen(veridosyasi, "r");
    if (dosya == NULL) 
	{
        printf("Dosya acilamadi");     
    }
	int i;
    for (i = 0; i < 100; i++) 
	{
        fscanf(dosya, "%d %f %lf", &deger1[i], &deger2[i], &deger3[i]);
    }

    fclose(dosya);
}

int main()  // ana fonksiyon
{
    int deger1[100]; // 1.sayýsal deðiþken türündeki sayýlarýn listesi
    float deger2[100]; // 2.sayýsal deðiþken türündeki sayýlarýn listesi
    double deger3[100]; // 3.sayýsal deðiþken türündeki sayýlarýn listesi

    okuVeriSeti("veriler.txt", deger1, deger2, deger3); // verileri okuyor
    
	   
    double toplam1 = 0.0; // aritmetik ortalama bulmak için baþlayan kod dizisi
    double toplam2 = 0.0;
    double toplam3 = 0.0;
    int k;  
    for (k = 0; k < 100; k++) // 1.sayý deðiþkeninin aritmetik ortalamasýný hesaplayan kýsým
	{
        toplam1 += deger1[k];
    }
    double ortalama1 = toplam1 / 100;
    
    for (k = 0; k < 100; k++) // 2.sayý deðiþkeninin aritmetik ortalamasýný hesaplayan kýsým
	{
        toplam2 += deger2[k];
    }
    double ortalama2 = toplam2 / 100;
    
    for (k = 0; k < 100; k++) // 3.sayý deðiþkeninin aritmetik ortalamasýný hesaplayan kýsým
	{
        toplam3 += deger3[k];
    }
    double ortalama3 = toplam3 / 100; // aritmetik ortalama bulmak için baþlayan kod dizisinin bitiþi
       
       
    int min1 = deger1[0], max1 = deger1[0]; // açýklýk bulmak için baþlayan kod dizisi
    float min2 = deger2[0], max2 = deger2[0];
    double min3 = deger3[0], max3 = deger3[0];
	int i;
    for (i = 0; i < 100; i++) {
        if (deger1[i] < min1) min1 = deger1[i];
        if (deger1[i] > max1) max1 = deger1[i];
        if (deger2[i] < min2) min2 = deger2[i];
        if (deger2[i] > max2) max2 = deger2[i];
        if (deger3[i] < min3) min3 = deger3[i];
        if (deger3[i] > max3) max3 = deger3[i];
    }

    int aciklik1 = max1 - min1;
    float aciklik2 = max2 - min2;
    double aciklik3 = max3 - min3; // açýklýk bulmak için baþlayan kod dizisinin bitiþi

   FILE *sonucDosyasi = fopen("sonuc.txt", "w"); // sonuç dosyasýnýn verilerin girilmesi için açýldýðý yer
    if (sonucDosyasi == NULL) {
        printf("Sonuc dosyasi acilamadi\n");
        return 1;
    }

    fprintf(sonucDosyasi, "Deger1 icin Aritmetik Ortalama: %f\nDeger2 icin Aritmetik Ortalama: %f\nDeger3 icin Aritmetik Ortalama: %f\n", ortalama1,ortalama2,ortalama3); // aritmetik ortalama verileri giriliyor
    printf("Deger1 icin Aritmetik Ortalama: %f\nDeger2 icin Aritmetik Ortalama: %f\nDeger3 icin Aritmetik Ortalama: %f\n", ortalama1,ortalama2,ortalama3);
    fprintf(sonucDosyasi, "\nDeger1 icin Aciklik: %d\nDeger2 icin Aciklik: %f\nDeger3 icin Aciklik: %lf\n", aciklik1, aciklik2, aciklik3); // açýklýk verileri giriliyor
    printf("\nDeger1 icin Aciklik: %d\nDeger2 icin Aciklik: %f\nDeger3 icin Aciklik: %lf\n", aciklik1, aciklik2, aciklik3);

    fclose(sonucDosyasi);

    return 0;
}
