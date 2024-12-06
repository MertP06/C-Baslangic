#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int faktor(int x)
{
	int sonuc=1;
	for(int i=1;i<=x;i++)
	{
		sonuc*=i;
	}
	return sonuc;
}
int kombinasyon(int n, int r)
{
	int sonuc=0,a,b,c,d;
	a=faktor(n);
	b=faktor(r);
	c=faktor(n-r);
	sonuc=a/(b*c);
	return sonuc;
}

int main(){
	int n,r,sonuc=0;	
	printf("Kombinasyonu alinacak ifadenin n degerini belirleyiniz:  ");
	scanf("%d",&n);
	
	printf("Kombinasyonu alinacak ifadenin r degerini belirleyiniz:  ");
	scanf("%d",&r);
	
	sonuc=kombinasyon(n,r);
	
	printf("Kombinasyonun sonucu: %d",sonuc);
	getch();
	return 0;
}

