#include <stdio.h>
#include <stdlib.h>

struct dugum {  // Yapý olusturma
    float veri; 
    struct dugum *ileri;
};

int main() {
    struct dugum *bir = (struct dugum *) malloc(sizeof(struct dugum));
    
    struct dugum *iki = (struct dugum *) malloc(sizeof(struct dugum));
    
    struct dugum *uc  = (struct dugum *) malloc(sizeof(struct dugum));
    
    struct dugum *dort = (struct dugum *) malloc(sizeof(struct dugum));

    bir->veri = 55.1; bir->ileri = iki;
	iki->veri = 55.2; iki->ileri = uc;
	uc->veri = 55.3; uc->ileri = dort;
	dort->veri = 55.4; dort->ileri = NULL;

    printf("%.1f - %.1f - %.1f - %.1f", bir->veri, iki->veri, uc->veri, dort->veri);

    return 0;
}

