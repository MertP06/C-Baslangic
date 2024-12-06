#include <stdio.h>
#include <stdlib.h>

int main() {
	// sayilar isimli hazirda bulunan .txt dosyasindaki sayilardan asal olanlari sayilar2.txt dosyasina yazdirir
	int i;
	int sayi;
	
	FILE *dosya=fopen("sayilar.txt","r");

	FILE *dosya1=fopen("sayilar2.txt","w");
	
	while(!feof(dosya))
	{
		fscanf(dosya,"%d",&sayi);
		int kontrol=0;
		for(i=2;i<sayi;i++)
		{
			if(sayi%i==0)
			{
				kontrol=1;
				break;
			}
		}
		if(kontrol==0)
		{
			fprintf(dosya1,"%d\n",sayi);
		}
	}
	
	printf("Asal sayilar basariyla diger dosyaya aktarildi.");


	return 0;
}
