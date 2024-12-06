#include<stdio.h>
#include<conio.h>

struct ders
{
    int ders_kod;
    int vize;
    int final;
    double gecmenotu;
};

struct sahis_bilgileri
{
    char adi[40];
    char soyadi[40];
    int no;
    struct ders dersler[5];
}kisi[5];

int main()
{   
    for (int i=0;i<5;i++)
    {
		printf("%d.Ogrencinin Adi: ",i+1);            
		scanf("%s",kisi[i].adi);
		 
        printf("%d.Ogrencinin Soyadi: ",i+1);         
		scanf("%s",kisi[i].soyadi);
		 
        printf("%d.Ogrencinin No: ",i+1);              
		scanf("%d",&kisi[i].no);
		
        printf("\n");
        
        for (int j=0;j<5;j++)
        {
        printf( "%d.Dersin Kodu: ",j+1);        
		scanf("%d",&kisi[i].dersler[j].ders_kod);
		
        printf( "%d.Dersin Vize Notu: ",j+1);        
		scanf("%d",&kisi[i].dersler[j].vize);
		
        printf("%d.Dersin Final Notu: ",j+1);        
		scanf("%d",&kisi[i].dersler[j].final);
		
		printf("\n");
		
        kisi[i].dersler[j].gecmenotu=(kisi[i].dersler[j].vize*0.4)+(kisi[i].dersler[j].final*0.6);
        }
		
		printf("\n\n");
		
        printf("Ogrencinin Adi: %s\n",kisi[i].adi);
        printf("Ogrencinin Soy Adi: %s\n",kisi[i].soyadi);
        printf("Ogrencinin Numarasi: %d\n",kisi[i].no);
        
        for (int j=0;j<5;j++)
        {
            printf("\n%d.Dersinden Aldigi Toplam Not: %.2lf",j+1,kisi[i].dersler[j].gecmenotu);
        }
		printf("\n\n************************************\n\n"); 
    }
    return 0;
}

