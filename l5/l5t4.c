#include <stdio.h>
#include <stdlib.h>

int muutaKokoa(int *taulukko, int vKoko){
    int uusi;
    printf("Anna taulukon uusi koko: ");
    scanf("%d", &uusi);
    if(uusi<0){
        printf("Taulukon koko ei voi olla negatiivinen.\n");
        return vKoko;
    }
    else{
        int muistin_maara = (uusi) * sizeof(int);
        if ((taulukko = (int*)realloc(taulukko, muistin_maara)) == NULL ){
            perror("Muistin varaus epäonnistui");
            exit(0);
        }
        for(int i = 0;i<uusi;i++){
            taulukko[i] = i;
        }
        return uusi;
    }
}

void tulosta(int *taulukko, int koko){
    if(koko==0){
        printf("Taulukko on tyhjä.\n");
    }
    else{
        printf("Taulukon alkiot ovat: ");
        for(int i = 0; i<koko;i++){
            printf("%d ", taulukko[i]);
        }
        printf("\n");
    }
    return;
}

int main()
{
    int *pTaulukko;
    if ((pTaulukko = (int *)malloc(sizeof(int))) == NULL){
        perror("Muistin varaus epäonnistui");
        exit(0);
    }
    
    int paal = 1;
    int taulukonKoko=0;
    while(paal == 1){
        int valinta;
        printf("1) Tulosta taulukon alkiot\n2) Muuta taulukon kokoa\n0) Lopeta\nAnna valintasi: ");
        scanf("%d", &valinta);
        switch(valinta){
            case 1:
                tulosta(pTaulukko, taulukonKoko);
                break;
            case 2:
                taulukonKoko = muutaKokoa(pTaulukko, taulukonKoko);
                break;
            case 0:
                free(pTaulukko);
                printf("Muisti vapautettu.\nKiitos ohjelman käytöstä.\n");
                paal = 0;
                break;
            default:
                printf("Tuntematon valinta, yritä uudestaan.\n");
        }
    }

    return 0;
}