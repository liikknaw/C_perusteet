#include <stdio.h>
#include <string.h>

int suurempiLuku(float eka, float toka, int valinta){
    if(valinta == 1){
        if(eka<toka){
            printf("Luku %g on suurempi ja %g pienempi.\n", toka, eka);
        }
        else if(eka>toka){
            printf("Luku %g on suurempi ja %g pienempi.\n", eka, toka);
        }
        else printf("Luvut %g ja %g ovat yhtä suuria.\n", eka, toka);
    }
    else{
        if(eka<toka){
            printf("Luku %5.2f on suurempi ja %5.2f pienempi.\n", toka, eka);
        }
        else if(eka>toka){
            printf("Luku %5.2f on suurempi ja %5.2f pienempi.\n", eka, toka);
        }
        else printf("Luvut %5.2f ja %5.2f ovat yhtä suuria.\n", eka, toka);
    }
    return 0;
}

int vertaaJonoja(char ekaNimi[], char tokaNimi[]){
    int tulos;
    tulos = strcmp(ekaNimi, tokaNimi);

    if(tulos<0){
        printf("Merkkijonona '%s' on suurempi ja '%s' pienempi.\n", tokaNimi, ekaNimi);
    }
    else if(tulos>0){
        printf("Merkkijonona '%s' on suurempi ja '%s' pienempi.\n", ekaNimi, tokaNimi);
    }
    else{
        printf("Merkkijonona 'Erkki' ja 'Erkki' ovat yhtä suuria.\n");
    }

    return 0;
}

int main()
{
    float luku1, luku2;
    printf("Anna kaksi kokonaislukua:\n");
    printf("Luku 1: ");
    scanf("%f", &luku1);
    printf("Luku 2: ");
    scanf("%f", &luku2);
    suurempiLuku(luku1, luku2, 1);

    float fluku1, fluku2;
    printf("Anna kaksi desimaalilukua:\n");
    printf("Luku 1: ");
    scanf("%f", &fluku1);
    printf("Luku 2: ");
    scanf("%f", &fluku2);
    suurempiLuku(fluku1, fluku2, 2);

    char ekaNimi[20], tokaNimi[20];
    printf("Anna kaksi nimeä:\n");
    printf("Nimi 1: ");
    scanf("%s", &ekaNimi);
    printf("Nimi 2: ");
    scanf("%s", &tokaNimi);
    vertaaJonoja(ekaNimi, tokaNimi);

    printf("Kiitos ohjelman käytöstä.\n");

    return 0;
}