#include <stdio.h>

int potenssi(){
    int luku, exponentti;
    int tulos=1;
    printf("Ohjelma laskee luvun potenssin.\n");
    printf("Anna kokonaisluku, jonka haluat korottaa potenssiin: ");
    scanf("%d", &luku);
    printf("Anna potenssi, jonka haluat laskea: ");
    scanf("%d", &exponentti);
    for(int i = 0; i<exponentti ;i++){
        tulos = tulos * luku;
    }
    printf("%d ^ %d = %d.\n", luku, exponentti, tulos);
    printf("Kiitos ohjelman käytöstä.\n");

    return tulos;
}

int main()
{
    potenssi();
    return 0;
}