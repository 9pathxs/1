#include "solidos.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc==2){
        int n = atoi(argv[1]);

        cone *c = malloc(n * sizeof(cone));
        if (c == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("cones: %d\n",  n);
        for(int i=0;i<n;i++){
            novo_cone(&c[i]);
        }
        for(int i=0;i<n;i++){
            printf("%d] raio: %f\t altura: %f\n", i+1, c[i].raio, c[i].altura);
        }
        free(c);
    }
    return 0;
}