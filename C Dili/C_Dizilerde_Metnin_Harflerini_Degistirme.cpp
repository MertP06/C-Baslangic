#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i;
	char metin[500];
	
	printf("METNI GIRINIZ: ");
	gets(metin);
	
	for(i=0;metin[i]!='\0';i++)
	{
		if(metin[i]>=97 && metin[i]<=122)
		{	
			metin[i] -=32;
		}
		else if(metin[i]>=65 && metin[i]<=90)
		{
			metin[i] +=32;
		}
	}
	printf("\n");
	printf("** METNINIZIN KUCUK HARFLERI BUYUK HARFLERE, BUYUK HARFLERI KUCUK HARFLERE DONUSTURULMUSTUR ** \n\n METNINIZIN YENI HALI :  %s ",metin);
	
	return 0;
}
