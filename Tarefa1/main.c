#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Palavra.h"

int main()
{
    FRASE *fo = malloc(sizeof(FRASE));
    digitafrase(fo);
    analisap(fo);
    return 0;
}
