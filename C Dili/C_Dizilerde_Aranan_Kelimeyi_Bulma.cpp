#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char metin[1000];
	char kelime[1000];
	int i,j;
	int baslangic=0;
	int esitmi=0;
	int kelimevarmi=0;
	
	printf("Metni Giriniz :");  
	gets(metin);  
		
	printf("Metinde Aranacak Kelimeyi Giriniz :");  
	gets(kelime);  

	for(i=0;metin[i]!='\0';i++)  
	{	
		baslangic=i;  
		for(j=0;kelime[j]!='\0';j++)  
		{
			if(metin[baslangic]==kelime[j])  
			{
				baslangic= baslangic+1;
				esitmi = 1;  
			}
			else 
			{
				esitmi=0;  
			
				break;  
			}	
		}
		if(esitmi==1)
		{
			printf("Aradiginiz Kelime Metnin Icerisinde Vardir.\nBasladigi Indis = %d Bittigi Indis = %d\n",i,baslangic);
   			kelimevarmi=1;  
		}
	}
		if(kelimevarmi==0) 
		{
			printf("Aradiginiz Kelime Metnin Icerisinde Yoktur.");
		}
		
	return 0;
}	
