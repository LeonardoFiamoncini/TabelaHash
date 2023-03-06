#include "hash.h"

static int hash(int k){ 
    return k%N;
}

Aluno* hsh_get(Hash tab, int mat){ 
    int h = hash(mat);
    Aluno* p = tab[h];
    while (p != NULL){
        if (p->matricula == mat) return p;
        p = p->prox;
    } 
    return NULL;
}

Aluno* hsh_set(Hash tab, int mat, char* n, char *e, char t){
    int h = hash(mat);
    Aluno* p = tab[h];

    while (p != NULL){
        if (p->matricula == mat) break;
        p = p->prox;
    }

    if (p == NULL){
        p = (Aluno*)malloc(sizeof(Aluno));
        p->matricula = mat; 
        p->prox = tab[h];
        tab[h] = p;
    }

    strcpy(p->nome, n);
    strcpy(p->email, e);
    p->turma = t;

    return p;
}

void hsh_remove(Hash tab, int mat){
    int h = hash(mat);
    Aluno* p = tab[h];
    Aluno* ant = p;

    while (p != NULL){
        if (p->matricula == mat){
            Aluno* tmp = p;

            if (p == ant) tab[h] = tmp->prox;
            else ant->prox = tmp->prox;
            
            free(tmp);
            break;
        }
        ant = p;
        p = p->prox;
    } 
}

void hsh_imprime(Hash tab){
    for (int i = 0; i < N; i++){
        Aluno* p = tab[i];
        while (p != NULL){
            printf("Matrícula: %d - Nome: %s - Turma: %c - Email: %s\n", p->matricula, p->nome, p->turma, p->email);
            p = p->prox;
        }
    }
}