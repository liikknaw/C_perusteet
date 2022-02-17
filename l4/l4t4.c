#include<stdio.h>
#include <string.h>

#define MAX 50

struct Tunnus{
    char nimi[MAX];
    char salasana[MAX];
    int id;
};
typedef struct Tunnus PAKOTUS; // Tietotyypin määrittely
PAKOTUS muuttuja2; // Muuttujan määrittely
PAKOTUS *pHlo1;

int valikko(){
    int valinta;
    printf("Valitse haluamasi toiminto:\n");
    printf("1) Lisää uusi tunnus\n");
    printf("2) Tulosta tunnukset\n");
    printf("0) Lopeta\n");
    printf("Valintasi: ");
    scanf("%d", &valinta);
    return valinta;
}

int main(){
    struct Tunnus lista[MAX];
    int tLaskin = 0;
    int on = 1;
	printf("Käyttäjätunnusten hallinta.\n");
    while(on == 1){
        int i = valikko();
    
        if(i == 1){
            char tunnus[MAX];
            char pw[MAX];
            printf("\nAnna käyttäjätunnus: ");
            scanf("%s", tunnus);
            printf("Anna salasana: ");
            scanf("%s", pw);
            
            struct Tunnus user;
            strcpy(user.nimi, tunnus);
            strcpy(user.salasana, pw);
            user.id = tLaskin;
            lista[tLaskin] = user;
            tLaskin++;
            printf("Tunnus '%s' lisättiin listaan.\n\n", tunnus);
        }
        if(i == 2){
            printf("\nListalla olevat tunnukset:\n");
            for(int j = 0; j < tLaskin; j++){
                printf("%d. tunnus '%s', salasana '%s', ID '%d'.\n", j+1, lista[j].nimi, lista[j].salasana, lista[j].id);
            }
        printf("\n");
        }
        if(i == 0){
            printf("\nKiitos ohjelman käytöstä.\n");
            on = 0;
        }
    }
    return 0;
}