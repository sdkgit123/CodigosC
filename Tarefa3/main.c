#include <stdio.h>
#include <stdlib.h>
#include "cubo.h"

int main()
{
    int fo = malloc(sizeof(CUBO));
    valoraresta(fo);
    lado(fo);
    area(fo);
    volume(fo);
}
