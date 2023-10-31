/* TAD Matriz */

/* Tipo exportado */
typedef struct matriz{
    int linhas;
    int colunas;
    int tamanho;
    int *vetor;
} Matriz;

/* Funções exportadas */

/* Função Criar
* Recebe os parâmentros de linhas e colunas e cria uma estrutura matriz do tamanho desejado
*/
Matriz matrizCriar(int linhas, int colunas);

/* Função AdicionaElemento
* Acessa uma posição na matriz e atribui um numero a ela
*/
void matrizAdicionaElemento(Matriz matriz, int elemento, int linha, int coluna);

/* Função BuscaElemento
* Retorna o numero na linha e coluna da matriz informada
*/
int matrizBuscaElemento(Matriz matriz, int linha, int coluna);

/* Função Zerar
* Preenche com zero todos as posições da matriz informada
*/
void matrizZerar(Matriz matriz);

/* Função Imprimir
* Imprime o valor em todas as posições da matriz informada
*/
void matrizImprimir(Matriz matriz);