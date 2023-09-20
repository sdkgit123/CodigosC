#include <stdio.h>
#include <stdlib.h>
#include"alunos.h"

int main()
{
    ALUNO *fo = malloc(sizeof(ALUNO));
    preenche(fo);
    printa(fo);
}
