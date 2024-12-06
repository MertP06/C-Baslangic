#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	
int sayi1,sayi2,sayi3,sayi4;
float tekort,ciftort;
int ttoplam=0;
int ccarpim=1;
int tadet=0;
int cadet=0;

printf("1.SAYIYI GIRINIZ: ");
scanf("%d",&sayi1);

printf("2.SAYIYI GIRINIZ: ");
scanf("%d",&sayi2);

printf("3.SAYIYI GIRINIZ: ");
scanf("%d",&sayi3);

printf("4.SAYIYI GIRINIZ: ");
scanf("%d",&sayi4);

if(sayi1%2==0)
{
	cadet+=1;
	ccarpim=ccarpim*sayi1;
}
else
{
	tadet+=1;
	ttoplam=ttoplam+sayi1;
}

if(sayi2%2==0)
{
	cadet+=1;
	ccarpim=ccarpim*sayi2;
}
else
{
	tadet+=1;
	ttoplam=ttoplam+sayi2;
}

if(sayi3%2==0)
{
	cadet+=1;
	ccarpim=ccarpim*sayi3;
}
else
{
	tadet+=1;
	ttoplam=ttoplam+sayi3;
}

if(sayi4%2==0)
{
	cadet+=1;
	ccarpim=ccarpim*sayi4;
}
else
{
	tadet+=1;
	ttoplam=ttoplam+sayi4;
}
printf("\n\n");
tekort=ttoplam/tadet;
ciftort=pow((float)ccarpim,(float)1/(cadet));

printf("TEK SAYILARIN ARITMETIK ORTALAMASI: %f\n",tekort);
printf("CIFT SAYILARIN GEOMETRIK ORTALAMASI: %f",ciftort);

	return 0;
}
