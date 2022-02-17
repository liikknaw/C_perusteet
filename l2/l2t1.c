#include <stdio.h>

int main()
{
    int eka, toka, valinta;
    printf("Anna kaksi kokonaislukua: ");
    scanf("%d %d", &eka, &toka);
    
    printf("\nValikko\n1) Summaa luvut yhteen.\n2) Kerro luvut keskenään.\nValitse: ");
    scanf("%d", &valinta);
    if(valinta == 1){
        printf("\nLuvut laskettiin yhteen. Tulos = %d.\n", eka+toka);
    }
    else if(valinta == 2){
        printf("\nLuvut kerrottiin keskenään. Tulos = %d\n.", eka*toka);
    }
    else{
        printf("\nTuntematon valinta.\n");
    }

    return 0;
}