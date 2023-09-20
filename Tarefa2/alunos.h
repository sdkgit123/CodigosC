#ifndef ALUNOS_H_INCLUDED
#define ALUNOS_H_INCLUDED

typedef struct{
    char nome[500];
    int dia;
    int cpf;
}ALUNO;

void preenche(ALUNO *fo);
void printa (ALUNO *fo);

#endif // ALUNOS_H_INCLUDED
