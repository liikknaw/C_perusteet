#include <stdio.h>

int main()
{
    float luku, pii=3.141;
    int valinta;
    printf("Anna liukuluku: ");
    scanf("%f", &luku);
    printf("\nValikko\n1) Kerro piin arvo luvulla %.3f.\n2) Jaa piin arvo luvulla %.3f.\nValitse: ", luku, luku);
    scanf("%d", &valinta);
    switch(valinta){
        case 1:
            printf("\nPii * %.3f = %.3f.\n", luku, pii * luku);
            break;
        case 2:
            printf("\nPii / %.3f = %.3f.\n", luku, pii / luku);
            break;
        default:
            printf("\nTuntematon valinta.\n");
            break;
    }
    
    return 0;
}