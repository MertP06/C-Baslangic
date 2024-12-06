#include <stdio.h>
#include <stdlib.h>

int sayiToplama(int n) 
{
	if(n!=0)
    {
        return n+sayiToplama(n-1);
	}
    else
    {
        return n;
	}
}
	
	
	
int main() 
{
	
    int sayi;
    printf("Sayi Giriniz: ");
    scanf("%d",&sayi);
    
    printf("Toplam = %d", sayiToplama(sayi));

	return 0;
}
