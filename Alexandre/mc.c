
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void ){
        int i, j;
        int val;
        float f;
        srand(time(NULL));
        printf("\nGerando 5 sequencias de 4  valores aleatorios:\n\n V1\tV2\tV3\tv4\n\n");
        for (j=0;j<25;j++){
                for(i=0;i<4;i++){
                        val=rand()%1000000;
                        f = val;
                        printf("%2f\t", f/1000000);

                }
                printf("\n");
        }
        return 0;



}
