#include <stdio.h>

int main()
{
    int luku, i=1;
    printf("Anna jokin kokonaisluku väliltä 1-10: ");
    scanf("%d", &luku);
    if(luku<=10 && luku>=1){
        while(i<=luku){
            printf("%d kierros.\n", i);
            i++;
        }
    }
    else{
        printf("Antamasi luku ei ole välillä 1-10.\n");
    }
    
    return 0;
}