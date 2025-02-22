#include "operacao.h"

struct Operacao {
    float valor;
    tConta  * conta;
    int id;
};

/**
 * @brief Cria uma variável (alocada dinamicamente) do tipo tOperacao. Ponteiros devem ser inicializados com NULL e variáveis numéricas com valor zero (exceto aquelas passadas como parâmetro para a função).
 *
 * @param conta - A conta que será associada a uma operação
 * @param valor - O valor da operação
 *
 * @return A variável do tipo tOperacao inicializada.
 */
tOperacao* CriaOperacao(tConta* conta, float valor){
    tOperacao * operacao;
    operacao = (tOperacao*)malloc(sizeof(tOperacao));
    operacao->valor = valor;
    operacao->id = RetornaIdConta(conta);
    return operacao;
}

/**
 * @brief Libera toda a memória alocada para armazenar dados de uma operacao.
 *
 * @param A variável do tipo tOperacao que será apagada.
 */
void DestroiOperacao(tOperacao* op){
    if(op){
        free(op);
    }
}


/**
 * @brief Consulta o valor de uma operação especifica
 *
 * @param op - A operacao que queremos consultar o valor
 * @return O valor da operação cadastrada
 */
float ConsultaValorOperacao(tOperacao* op){
    return op->valor;
}


/**
 * @brief Imprime a operação. Ver formato nos exemplos de saída e/ou roteiro.
 *
 * @param op - A operacao que queremos imprimir
 */
void ImprimeOperacao(tOperacao* op){
    printf("\nOperação na conta %d com valor %.2f",op->id, op->valor);
    
}