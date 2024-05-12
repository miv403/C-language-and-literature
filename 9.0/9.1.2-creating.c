#include <stdio.h>
#define YEMEK_LIST "./yemekListesi.csv"

int main(void) {

    FILE *pYemekList = NULL;

    if ((pYemekList = fopen(YEMEK_LIST, "w")) == NULL)
        puts("Dosya Acilamadi!");
    else {
        puts("yemekAdi yemekFiyati hazirlanmaSuresi");
        puts("bitirmek icin EOF girin.");
        printf("%s", "? ");
        char yemekAdi[15] = "";
        int yemekFiyati = 0;
        int hazirlanmaSuresi = 0;

        scanf("%14s%d%d",
        yemekAdi,
        &yemekFiyati,
        &hazirlanmaSuresi);
        
        fprintf(pYemekList, "yemekAdi,yemekFiyati,hazirlanmaSuresi\n");
        while(!feof(stdin)) {

            fprintf(pYemekList, "%s,%d,%d\n", yemekAdi, yemekFiyati, hazirlanmaSuresi);
            printf("%s", "? ");
            scanf("%14s%d%d",
            yemekAdi,
            &yemekFiyati,
            &hazirlanmaSuresi);
        }
        fclose(pYemekList);
    }
}