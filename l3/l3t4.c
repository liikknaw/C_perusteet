#include <stdio.h>

int koko = 30;

int laskePituus(char jono[]){
    char *ptr;
    int iPituus = 0;
    ptr = jono;
    while (*ptr != '\0') {
        iPituus++;
        ptr++;
    }
    return iPituus;
}

int kopioi(char mjono[], char kJono[]){
    int pituus = laskePituus(mjono);
    for (int i=0; i < pituus; i++){
        kJono[i] = mjono[i];
    }
    
    return 0;
}

int main()
{
    char mjono[koko];
    char kJono[koko];
    printf("Anna kopioitava merkkijono: ");
    fgets(mjono, koko, stdin);
    mjono[laskePituus(mjono)-1]='\0';
    kopioi(mjono, kJono);
    
    printf("Merkkijono 1 on '%s'.\n", mjono);
    printf("Merkkijono 2 on '%s'.\n", kJono);
    printf("Kiitos ohjelman käytöstä.\n");

    return 0;
}