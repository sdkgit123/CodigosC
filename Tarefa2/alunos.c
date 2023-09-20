#include<stdio.h>
#include<stdlib.h>
#include"alunos.h"

void preenche(ALUNO *fo){
    printf("Digite o nome do aluno:\n");
    gets(fo->nome);
    printf("Digite sua data de nascimento (apenas numeros):\n");
    scanf("%d", &fo->dia);
    printf("Digite seu CPF (apenas numeros):\n");
    scanf("%d", &fo->cpf);
}

void printa(ALUNO *fo){
    printf("%s\n", fo->nome);
    printf("%d\n", fo->dia);
    printf("%d\n", fo->cpf);
}
