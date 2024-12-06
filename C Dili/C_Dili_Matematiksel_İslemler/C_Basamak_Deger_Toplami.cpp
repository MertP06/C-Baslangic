#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int basamaktoplami(int sayi) 
{
	int toplam=0,kalan,girilen;
	girilen=sayi;
	
	while(girilen>0) 
	{
		kalan=girilen%10;
		girilen=girilen/10;
		toplam=toplam+kalan;
	}
	return toplam;
}

int main()
{
	int sayi;
	printf("Basamak degerleri toplami hesaplanacak olan sayiyi giriniz: ");
	scanf("%d",&sayi);
	basamaktoplami(sayi);
	printf("Basamaklarin toplami: %d", basamaktoplami(sayi) );
}

