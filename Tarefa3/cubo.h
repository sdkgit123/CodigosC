#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED

typedef struct{
    int aresta;
    int lado;
    int area;
    int volume;
}CUBO;

void valoraresta(CUBO *fo);
void lado(CUBO *fo);
void area(CUBO *fo);
void volume(CUBO *fo);
void liberaesp(CUBO *fo);

#endif // CUBO_H_INCLUDED
