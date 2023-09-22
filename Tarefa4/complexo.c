#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"

NUMCOMPLEX* criarcomplex(NUMCOMPLEX *fo){
    fo = malloc(sizeof(NUMCOMPLEX));
    printf("Digite um numero real: \n");
    scanf("%d", &fo->real);
    printf("Digite um numero imaginario: \n");
    scanf("%d", &fo->imag);
    printf("Digite oto numero real: \n");
    scanf("%d", &fo->otoreal);
    printf("Digite oto numero imaginario: \n");
    scanf("%d", &fo->otoimag);
    return fo;
}

void somacomplex(NUMCOMPLEX *fo){
    int somareal, somaimag;
    somareal = fo->real + fo->otoreal;
    somaimag = fo->imag + fo->otoimag;
    if(somaimag < 0){
        printf("Soma: %d - %di\n", somareal, somaimag);
    } else{
        printf("Soma: %d + %di\n", somareal, somaimag);
    }
}

void subcomplex(NUMCOMPLEX *fo){
    int subreal, subimag;
    subreal = fo->real - fo->otoreal;
    subimag = fo->imag - fo->otoimag;
    if(subimag < 0){
        printf("Subtracao: %d %di\n", subreal, subimag);
    } else{
        printf("Subtracao: %d + %di\n", subreal, subimag);
    }
}

void multicomplex(NUMCOMPLEX *fo){
    int multi1, multi2, multi3, multi4, soma1, soma2;
    multi1 = fo->real*fo->otoreal;
    multi2 = fo->real*fo->otoimag;
    multi3 = fo->imag*fo->otoreal;
    multi4 = fo->imag*fo->otoimag;
    soma1 = (multi2+multi3);
    soma2 = (multi1)+(multi4 * -1);
    if(soma1 < 0){
        printf("Multiplicacao: %d %di\n", soma2, soma1);
    } else{
        printf("Multiplicacao: %d + %di\n", soma2, soma1);
    }
}

void divcomplex(NUMCOMPLEX *fo) {
    int divreal, divimag;
    int denominador = (fo->otoreal * fo->otoreal) + (fo->otoimag * fo->otoimag);
    if (denominador != 0) {
        divreal = ((fo->real * fo->otoreal) + (fo->imag * fo->otoimag)) / denominador;
        divimag = ((fo->imag * fo->otoreal) - (fo->real * fo->otoimag)) / denominador;
        if (divimag < 0) {
            printf("Divisao: %d%di\n", divreal, divimag);
        } else {
            printf("Divisao: %d+%di\n", divreal, divimag);
        }
    } else {
        printf("Erro: Divisao por zero.\n");
    }
}


void liberacomplex(NUMCOMPLEX *fo){
    free(fo);
}
