#define pi 3.14159

typedef struct cone{
    float altura;
    float raio;
}cone;

typedef struct cilindro{
    float altura;
    float raio;
}cilindro;

typedef struct esfera{
    float raio;
}esfera;

typedef struct paralelo{
    float altura;
    float largura;
    float comprimento;
}paralelo;

float volume_cone (cone c);
float volume_cilin (cilindro c); 
float volume_esfera (esfera e);
float volume_paralelo (paralelo p);
void novo_cone(cone *c);