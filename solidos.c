#include "solidos.h"
#include <math.h>

float volume_cone (cone c){
    return ((1.0/3.0)*c.altura)*(pi*c.raio*c.raio);
}
float volume_cilin (cilindro c){
    return (pi*c.raio*c.raio*c.altura);
}