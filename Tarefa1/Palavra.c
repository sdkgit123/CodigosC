#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Palavra.h"

void digitafrase(FRASE *fo){
    printf("Digite uma frase: \n");
    gets(fo->frase);
}

void analisap(FRASE *fo){
    int numerosfo, i;
    int aux = 0;
    numerosfo = strlen(fo->frase);
    for(i=0; i<numerosfo; i++){
        if(fo->frase[i]=='p' || fo->frase[i]=='P'){
           aux++;
            break;
    }
}
    if(aux == 0){
        printf("NAO");
    }else{
    printf("SIM");
    }
}

