#include <stdio.h>
#include <stdlib.h>

int tarkistaSyote(char *taulukko[]){
    int temp = atoi(taulukko[1]);
    if(temp<=0){
        printf("Parametri ei ollut positiivinen kokonaisluku.\n");
        exit(0);
    }
    return 0;
}

int *varaaTilaa(char *taulukko[]){
    int temp = atoi(taulukko[1]);
    int *pLuku;
	int muistin_maara = temp * sizeof(int);
    pLuku = (int*)malloc((muistin_maara));
    if (pLuku == NULL) {
        perror("Muistin varaus epäonnistui\n");
        exit(0);
    }
    else{
        printf("Muistin varaus onnistui.\n");
        printf("Taulukossa on tilaa %d alkiolle.\n", temp);
        return pLuku;
    }
}

int taytaTaulukko(int *taulukko, char *nb[]){
    int luku;
    int temp = atoi(nb[1]);
    for(int i = 0; i<temp;i++){
        printf("Anna %d. luku: ", i+1);
        scanf("%d", &luku);
        taulukko[i]=luku;
    }
    printf("Taulukko täytetty.\n");
    printf("Taulukossa on luvut: ");
    for(int i = 0;i<temp;i++){
        printf("%d ", taulukko[i]);
    }
    printf("\nTaulukko tulostettu.\n");
    return 0;
}

int vapautaMuisti(int *taulukko){
    free(taulukko);
    printf("Muisti vapautettu.\n");
    return 0;
}

int main(int argc, char *argv[])
{
    int *pTaulukko;
    tarkistaSyote(argv);
    pTaulukko = varaaTilaa(argv);
    taytaTaulukko(pTaulukko, argv);
    vapautaMuisti(pTaulukko);
    printf("Kiitos ohjelman käytöstä.\n");

    return 0;
}
