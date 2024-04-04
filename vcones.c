#include "solidos.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc==2){
        cone c[atoi(argv[1])-1];
        printf("cones: %d\n", atoi(argv[1]));
        for(int i=0;i<atoi(argv[1]);i++){
            novo_cone(&c[i]);
            printf("%d] raio: %f\t altura: %f\n", i+1, c[i].raio, c[i].altura)
        }
    }
    return 0;
}