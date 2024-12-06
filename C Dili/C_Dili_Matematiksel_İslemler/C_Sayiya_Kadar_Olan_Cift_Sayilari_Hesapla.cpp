#include <stdio.h>
#include <stdlib.h>
int main() {
	int sayi1;
	int a;
	int toplam=0;
	int ortalama=0;
	int sayiadedi=0;
	
	printf("LUTFEN POZITIF BIR SAYI GIRINIZ: ");
    scanf("%d",&sayi1);
   
    for(a=0;a<=sayi1;a+=1)
    {
    	if(a%2==0)
    	{
    		toplam=toplam+a;
    		sayiadedi+=1;
		}	
    } 
	
	ortalama=toplam/sayiadedi;
	printf("Girmis oldugunuz sayi dahil, girmis oldugunuz sayiya kadar olan cift sayilarin adedi: %d\n",sayiadedi);
	printf("Girmis oldugunuz sayi dahil, girmis oldugunuz sayiya kadar olan cift sayilarin toplami : %d\n",toplam);
	printf("Girmis oldugunuz sayi dahil, girmis oldugunuz sayiya kadar olan cift sayilarin ortalamasi : %d",ortalama);
	return 0;
}
