#include <stdio.h>
#include <string.h>

void right_rotate(char* str, int step) 
{
    int len = strlen(str);
    char *p = str + len - 1;
    char temp;

    while (step--) 
	{
        temp = *p;
        memmove(str+1,str,len-1);
        *str = temp;
    }
}

int main() 
{
    char str[100];
    int kacadim;

    printf("Metni giriniz: ");
    scanf("%s",&str);
    
    printf("\n\n");
 
    printf("Kac adim kaydirmak istersiniz? ");
    scanf("%d", &kacadim);

	printf("\n\n");

    right_rotate(str,kacadim);
    printf("Kaydirilmis metin: %s\n", str);

    return 0;
}
