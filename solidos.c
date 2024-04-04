#include "solidos.h"
#include <math.h>
#include <stdio.h>

float volume_cone (cone c){
    return ((1.0/3.0)*c.altura)*(pi*c.raio*c.raio);
}
float volume_cilin (cilindro c){
    return (pi*c.raio*c.raio*c.altura);
}
void novo_cone(cone *c){
    scanf("%f", &((*c).altura));
    scanf("%f", &((*c).raio));
}