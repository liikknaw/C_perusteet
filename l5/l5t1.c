#include <stdio.h>
#include <stdlib.h>

void potenssi(int *luku) {
    *luku = *luku * *luku;
}

int main(int argc, char *argv[])
{
    if(argc<2)printf("Et antanut lukua!\n");
    else{
        int temp = atoi(argv[1]);
        printf("Luku on %d.\n", temp);
        potenssi(&temp);
        printf("Luvun neliö on %d.\n", temp);
    }
    
    printf("Kiitos ohjelman käytöstä.\n");

    return 0;
}