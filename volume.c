#include "solidos.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(!strcmp(argv[1], "-cone")&& argc == 4){
        cone c;
        c.altura = atof(argv[2]);
        c.raio = atof(argv[3]);
        printf("volume do cone = %.2f m^3\n", volume_cone(c));
    }
    else if(!strcmp(argv[1], "-cilindro")&& argc == 4){
        cilindro c;
        c.altura = atof(argv[2]);
        c.raio = atof(argv[3]);
        printf("volume do cilindro = %.2f m^3\n", volume_cilin(c));
    }
    else{
        printf("utilize um destes formatos:\n");
        printf("'$ ./volume -cone valor_altura valor_raio'\n");
        printf("'$ ./volume -cilindro valor_altura valor_raio'\n");
    }
    return 0;
}