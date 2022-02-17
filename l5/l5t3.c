#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

typedef struct henkilo{
    char nimi[MAX];
    int ika;
} HENKILO;

int vertaa(HENKILO yx, HENKILO kax){
    for(int i = 0; i<MAX; i++){
        if(yx.nimi[i]=='\0' && kax.nimi[i]=='\0'){
            break;
        }
        if(yx.nimi[i] != kax.nimi[i]){
            return 1;
        }
    }
    if(yx.ika != kax.ika){
        return 1;
    }
    return 0;
}

int vertaaOsoitteita(HENKILO yx, HENKILO kax){
    if(*yx.nimi != *kax.nimi) return 1;
    return 0;
}

HENKILO *kopioi(HENKILO yx){
    HENKILO *kopio;
    
    if ((kopio = (HENKILO*)malloc(sizeof(HENKILO))) == NULL ){
        perror("Muistin varaus epäonnistui");
        exit(1);
    }
    
    for(int i = 0; i<MAX;i++){
        kopio->nimi[i] = yx.nimi[i];
    }
    kopio->ika = yx.ika;
    
    return kopio;
}

int main()
{
    HENKILO eka;
    HENKILO toka;
    
    printf("Anna ensimmäisen henkilön etunimi: ");
    scanf("%s", eka.nimi);
    getchar();
    printf("Anna ensimmäisen henkilön ikä: ");
    scanf("%d", &eka.ika);
    getchar();
    
    printf("Anna toisen henkilön etunimi: ");
    scanf("%s", toka.nimi);
    getchar();
    printf("Anna toisen henkilön ikä: ");
    scanf("%d", &toka.ika);
    getchar();
    
    int testi;
    testi = vertaa(eka, toka);
    
    if(testi == 0){
        printf("Annetut tiedot ovat samoja.\n");
    }
    else if(testi == 1){
        printf("Annetut tiedot eivät ole samoja.\n");
    }
    
    HENKILO *tes;
    tes = kopioi(eka);
    
    testi = vertaa(eka, *tes);
    
    if(testi == 0){
        printf("Kopioinnin jälkeen tietueiden tiedot ovat samoja.\n");
    }
    else if(testi == 1){
        printf("Kopioinnin jälkeen tietueiden tiedot eivät ole samoja.\n");
    }
    
    testi = vertaaOsoitteita(eka, *tes);
    
    if(testi == 1){
        printf("Kopioinnin jälkeen tietueiden osoitteet ovat samoja.\n");
    }
    else if(testi == 0){
        printf("Kopioinnin jälkeen tietueiden osoitteet eivät ole samoja.\n");
    }
    
    free(tes);
    printf("Muisti vapautettu.\n");
    printf("Kiitos ohjelman käytöstä.\n");

    return 0;
}