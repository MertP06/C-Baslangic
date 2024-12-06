#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>

void asalsayi(int x)
{
	int i;
	int kontrol=0;
	if(x>0)
	{
		if(x!=1)
		{
			for(i=2;i<x;i++)
			{
				if(x%i==0)
				{
					kontrol=1;
				}
			}
			if(kontrol==0)
			{
				printf("Sayi asaldir.");
			}
			else
			{
				printf("Sayi asal degildir.");
			}
		}
		else
		{	
		printf("Sayi asal degildir.");
		}
	}
	else if(x==0)
	{
		printf("Sayi asal degildir.");
	}
	else
	{
		printf("Pozitif bir sayi giriniz");
	}
}

int main()
{
	int a;
	printf("Girdiginiz sayi asal mi degil mi ogrenmek icin sayiyi giriniz: ");
	scanf("%d",&a);
	asalsayi(a);	
}

