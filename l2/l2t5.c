#include <stdio.h>

int main()
{
    char merkit[200], uusiMerkki;
    int valinta, on=1, i=0, j;
    while(on==1){
        printf("\nValikko\n1) Lisää uusi merkki\n2) Tyhjennä merkkijono\n3) Tulosta merkkijono\n0) Lopeta\nValintasi: ");
        scanf("%d", &valinta);
        switch(valinta){
            case 1:
                if(i==200){
                    printf("Merkkijonoon ei mahdu enempää merkkejä");
                    break;
                }
                else{
                    printf("\nAnna jokin merkki: ");
                    scanf(" %c", &uusiMerkki);
                    merkit[i]=uusiMerkki;
                    i++;
                    break;
                }
                
            case 2:
                for(j=0;j<=i;j++){
                    merkit[j]=" ";
                }
                i=0;
                printf("\nMerkkijono on tyhjennetty.\n");
                break;
            case 3:
                if(i==0){
                    printf("\nMerkkijono on tyhjä.\n");
                    break;
                }
                else{
                    printf("\nMerkkijono: ");
                    for(j=0;j<i;j++){
                        printf("%c", merkit[j]);
                    }
                    printf("\n");
                    break;
                }
            case 0:
                printf("\nOhjelman lopetus.\n");
                on=0;
                break;
            default:
                printf("\nTuntematon valinta.\n");
                break;
        }
    }
    
    
    
    
    return 0;
}