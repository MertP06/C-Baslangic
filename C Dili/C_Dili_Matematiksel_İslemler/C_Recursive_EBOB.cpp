#include <stdio.h>
#include <conio.h>

int ebob(int x, int y) 
{ 
	if(y==0) 
	{ 
	return x;
	}	 
	
	else if(y > 0) 
	{ 
	return ebob(y,x%y); 
    } 
}


int main(){

int sayi1,sayi2,sonuc;


printf("1.sayiyi giriniz: ");
scanf("%d",&sayi1);
 
printf("2.sayiyi giriniz: "); 
scanf("%d",&sayi2);

sonuc=ebob(sayi1,sayi2);

printf("\n\n");
printf("IKI SAYININ EBOBU = %d\n",sonuc);

return 0;
}

