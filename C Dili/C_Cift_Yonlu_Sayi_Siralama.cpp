#include <stdio.h>
#include <stdlib.h>

struct Dugum {
    int veri;
    struct Dugum* onceki;
    struct Dugum* sonraki;
};

struct Dugum* baslangic = NULL;
struct Dugum* son = NULL;

struct Dugum* dugumOlustur(int veri) {
    struct Dugum* yeniDugum = (struct Dugum*)malloc(sizeof(struct Dugum));
    yeniDugum->veri = veri;
    yeniDugum->onceki = NULL;
    yeniDugum->sonraki = NULL;
    return yeniDugum;
}

void siraliEkle(int veri) {
    struct Dugum* yeniDugum = dugumOlustur(veri);

    if (baslangic == NULL) {
        baslangic = yeniDugum;
        son = yeniDugum;
    }
    else {
        if (veri < baslangic->veri) {
            yeniDugum->sonraki = baslangic;
            baslangic->onceki = yeniDugum;
            baslangic = yeniDugum;
        }
        else if (veri > son->veri) {
            yeniDugum->onceki = son;
            son->sonraki = yeniDugum;
            son = yeniDugum;
        }
        else {
            struct Dugum* temp = baslangic;

            while (temp->veri < veri) {
                temp = temp->sonraki;
            }

            yeniDugum->sonraki = temp;
            yeniDugum->onceki = temp->onceki;
            temp->onceki->sonraki = yeniDugum;
            temp->onceki = yeniDugum;
        }
    }
}

void listeyiYazdir() {
    struct Dugum* temp = baslangic;

    if (temp == NULL) {
        printf("Liste boþ.\n");
        return;
    }

    printf("Liste: ");
    while (temp != NULL) {
        printf("%d ", temp->veri);
        temp = temp->sonraki;
    }
    printf("\n");
}

int main() 
{
	printf("Kodda 'siraliEkle' fonksiyonuna istediginiz sayilari ekleyerek siralanmasini saglayabilirsiniz.\n");
	printf("Ornek olarak '64','272','15','1've'81'sayilari rastgele eklenmistir.\n");
    siraliEkle(64);
    siraliEkle(272);
    siraliEkle(15);
    siraliEkle(1);
    siraliEkle(81);

    listeyiYazdir();

    return 0;
}

