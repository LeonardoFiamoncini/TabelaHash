#ifndef _hash_h
#define _hash_h

#define N 127

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct aluno {
    int matricula;
    char nome[81];
    char turma;
    char email[41];
    struct aluno* prox;
} Aluno;

typedef Aluno* Hash[N];

static int hash(int k);
Aluno* hsh_get(Hash tab, int mat);
Aluno* hsh_set(Hash tab, int mat, char* n, char *e, char t);
void hsh_remove(Hash tab, int mat);
void hsh_imprime(Hash tab);

#endif