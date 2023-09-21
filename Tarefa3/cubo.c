#include <stdio.h>
#include <stdlib.h>
#include "cubo.h"

void valoraresta(CUBO *fo){
    printf("Digite o tamanho da aresta do cubo:\n");
    scanf("%d", &fo->aresta);
}

void lado(CUBO *fo){
    fo->lado = fo->aresta * 4;
    printf("lado: %d\n", fo->lado);
}

void area(CUBO *fo){
    fo->area = (fo->aresta*fo->aresta) * 6;
    printf("area total: %d\n", fo->area);
}

void volume(CUBO *fo){
    fo->volume = fo->aresta * fo->aresta * fo->aresta;
    printf("volume: %d\n", fo->volume);
}

void liberaesp(CUBO *fo){
    free(fo);
}
