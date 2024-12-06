#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

void ekle(struct Node** baslangic, int data) {
    struct Node* node = newNode(data);
    if (*baslangic == NULL) {
        *baslangic = node;
    } else {
        struct Node* sonraki = *baslangic;
        while (sonraki->next != NULL) {
            sonraki = sonraki->next;
        }
        sonraki->next = node;
        node->prev = sonraki;
    }
}

void listeyiYazdir(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void tersListeyiYazdir(struct Node* node) {
    while (node->next != NULL) {
        node = node->next;
    }
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->prev;
    }
    printf("\n");
}

int main() {
    struct Node* baslangic = NULL;
    int sayi;
    
	printf("Cikmak icin negatif bir sayi girin.\n");
	printf("Istediginiz sayilari girin:\n");

    while (1) {
        printf("Sayi: ");
        scanf("%d", &sayi);

        if (sayi < 0) {
            break;
        }

        ekle(&baslangic, sayi);
    }

    printf("Liste: ");
    listeyiYazdir(baslangic);

    printf("Ters Liste: ");
    tersListeyiYazdir(baslangic);

    return 0;
}

