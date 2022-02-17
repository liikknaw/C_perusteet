#include<stdio.h>
#include<string.h>
#define MAX 50

struct Kirja{
    char nimi[MAX];
    int painovuosi;
    int hyllypaikka;
};

int main(){
    struct Kirja kk;
    
    printf("Anna kirjan nimi: ");
    fgets(kk.nimi, sizeof(kk.nimi), stdin);
    kk.nimi[strlen(kk.nimi)-1] = '\0';

    printf("Anna kirjan painovuosi: ");
    scanf("%d", &kk.painovuosi);
    printf("Anna kirjan hyllypaikka: ");
    scanf("%d", &kk.hyllypaikka);
    
    printf("Kirjan nimi on '%s', painovuosi %d ja hyllypaikka %d.\n", kk.nimi, kk.painovuosi, kk.hyllypaikka);
    printf("Kiitos ohjelman käytöstä.\n");
    return 0;
}