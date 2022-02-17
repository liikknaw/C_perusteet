#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    if(argc<4){
		printf("Et antanut syötteitä.");
		printf("\nKiitos ohjelman käytöstä.\n");
		return(0);
	}
	float tulos;
    int virhe = 0;
    float luku1 = atof(argv[1]);
    float luku2 = atof(argv[3]);
        
    if(*argv[2] == '+'){
            tulos = luku1 + luku2;
    }
    else if(*argv[2] == '-'){
        tulos = luku1 - luku2;
    }
    else if(*argv[2] == 'x'){
        tulos = luku1 * luku2;
    }
    else if(*argv[2] == '/'){
        tulos = luku1 / luku2;
    }
    else{
        printf("Virheellinen syöte.");
        virhe = 1;
    }
    if(virhe == 0){
        printf("%.4g %c %.4g = %.2f", luku1, *argv[2], luku2, tulos);
    }
    printf("\nKiitos ohjelman käytöstä.\n");
    
    return 0;
}