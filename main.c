#include "hash.c"

int main(void){
  setlocale(LC_ALL, "Portuguese");

  Hash h;
  for (int i = 0; i < N; i++)
    h[i] = NULL;

  //Inserção de alguns alunos.
  hsh_set(h, (int) 1100, "AlunoW", "alunow@gmail.com", 'A');
  hsh_set(h, (int) 1122, "AlunoX", "alunox@gmail.com", 'B');
  hsh_set(h, (int) 2200, "AlunoY", "alunoy@gmail.com", 'A');
  hsh_set(h, (int) 2211, "AlunoZ", "alunoz@gmail.com", 'C');

  //Impressão.
  hsh_imprime(h);

  Aluno* aluno = hsh_get(h, 2200);
  //Impressão apenas do aluno de matrícula 2200 retornado através da função hsh_get().
  printf("\nMatrícula: %d - Nome: %s - Turma: %c - Email: %s\n\n", aluno->matricula, aluno->nome, aluno->turma, aluno->email);

  //Remoção do aluno de matrícula 1100.
  hsh_remove(h, 1100);

  //Impressão atualizada, agora sem o aluno de matrícula 1100.
  hsh_imprime(h);
}   