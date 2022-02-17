#include<stdio.h>
#define max 2

int main(){
    int m1[max][max];
    int m2[max][max];
    
    printf("Anna arvot yhteenlaskettaville matriiseille:\n");
    printf("Matriisin 1 alkiot:\n");
    for(int i = 0;i < max;i++){
        for(int j = 0;j < max; j++){
            printf("Rivi %d alkio %d: ", i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }
    
    printf("\nMatriisi 1:\n");
    for(int i = 0;i<max;i++){
        for(int j = 0;j<max;j++){
            printf("%4d ", m1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriisin 2 alkiot:\n");
    for(int i = 0;i < max;i++){
        for(int j = 0;j < max; j++){
            printf("Rivi %d alkio %d: ", i+1, j+1);
            scanf("%d", &m2[i][j]);
        }
    }
    
    printf("\nMatriisi 2:\n");
    for(int i = 0;i<max;i++){
        for(int j = 0;j<max;j++){
            printf("%4d ", m2[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSummamatriisi:\n");
    for(int i = 0;i<max;i++){
        for(int j = 0;j<max;j++){
            printf("%4d ", m1[i][j] + m2[i][j]);
        }
        printf("\n");
    }
	printf("\nKiitos ohjelman käytöstä.\n");
    
    return 0;
}
