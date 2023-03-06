# TabelaHash
Implementação na Linguagem de Programação C de uma estrutura de tabela de disperção (hash table) para armazenar cadastros de alunos. Para tratar eventuais colisões na tabela, será utilizada uma estratégia de listas encadeadas (Ver arquivo "Tratamento de colisão.png"). 

Fatos a serem considerados:

1) O cadastro de um aluno é armazenado em um elemento de uma lista encadeada, e a chave de busca é seu numero de matrícula.

2) A tabela é um array de ponteiros para o primeiro elemento de cada lista.

3) A hash table será definida como um tipo de dados composto por um array de ponteiros para alunos, com uma quantidade de posições que seja um número primo, no caso, 127. Desta forma, quando declaramos uma variável do tipo Hash, já estamos criando o array com uma quantidade prima de posições.
