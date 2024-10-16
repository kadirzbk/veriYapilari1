#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *temp = NULL;

void basaEkle(int veri) {
    struct node *eleman;
    eleman = (struct node *) malloc(sizeof(struct node));
    eleman->data = veri;
    eleman->next = start;
    start = eleman;
}

void sonaEkle(int veri) {
    struct node *eleman;
    eleman = (struct node *) malloc(sizeof(struct node));
    eleman->data = veri;
    eleman->next = NULL;

    if (start == NULL) {
        start = eleman;
    } else {
        temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = eleman;
    }
}

void yazdir() {
    temp = start;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int sayi, adet = 0, secim;

    while (adet != 6) {
        printf("\nBa�a eleman eklemek i�in 1\n");
        printf("Sona eleman eklemek i�in 2\n");
        printf("Se�iminizi yap�n�z: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("\nBa�a eklenecek eleman�n de�eri: ");
                scanf("%d", &sayi);
                basaEkle(sayi);
                yazdir();
                break;
            case 2:
                printf("\nSona eklenecek eleman�n de�eri: ");
                scanf("%d", &sayi);
                sonaEkle(sayi);
                yazdir();
                break;
            default:
                printf("Ge�ersiz se�im!\n");
                break;
        }
        adet++;
    }

    return 0;
}
