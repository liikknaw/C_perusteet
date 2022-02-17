#include <stdio.h>

int main()
{
    int luku, i, sum = 0;
    printf("Anna jokin luku väliltä 10 - 200: ");
    scanf("%d", &luku);
    if(luku<=200 && luku>=10){
        for(i=1;i<=luku;i++)
        {
            sum=sum+i;
        }
        printf("Lukujen 0 - %d summa on %d.\n", luku, sum);
    }
    else{
        printf("Antamasi luku ei ole annetulla välillä.\n");
    }

    return 0;
}