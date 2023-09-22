#ifndef COMPLEXO_H_INCLUDED
#define COMPLEXO_H_INCLUDED

typedef struct{
    int real;
    int imag;
    int otoreal;
    int otoimag;
}NUMCOMPLEX;

NUMCOMPLEX* criarcomplex(NUMCOMPLEX *fo);
void liberacomplex(NUMCOMPLEX *fo);
void somacomplex(NUMCOMPLEX *fo);
void subcomplex(NUMCOMPLEX *fo);
void multicomplex(NUMCOMPLEX *fo);
void divcomplex(NUMCOMPLEX *fo);

#endif // COMPLEXO_H_INCLUDED
