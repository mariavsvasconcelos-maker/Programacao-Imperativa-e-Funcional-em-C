#include <stdio.h>

// Definição da struct Produto
typedef struct {
    int id;
    float preco;
} Produto;

// Função aplicar_desconto da Atividade 3 para modificação
void aplicar_desconto(Produto *ptr_prod, float desconto_percentual) {
    if (ptr_prod != NULL) {
        ptr_prod->preco = ptr_prod->preco * (1.0f - (desconto_percentual / 100.0f));
    }
}

// 2. Criar a função imprimir_produtos que recebe um ponteiro para Produto e a quantidade de itens.
// OBRIGATÓRIO: Percorrer o vetor e imprimir os dados utilizando ARITMÉTICA DE PONTEIROS,
// sem usar a sintaxe tradicional de colchetes (como ptr[i]).
void imprimir_produtos(Produto *ptr, int quantidade) {
    printf("\n--- Relatorio de Estoque (Aritmetica de Ponteiros) ---\n");
    for (int i = 0; i < quantidade; i++) {
        // (ptr + i) desloca o ponteiro para o i-ésimo elemento da struct Produto
        // -> acessa os membros do elemento apontado
        printf("Posicao %d -> ID: %d | Preco: R$ %.2f\n", 
               i, 
               (ptr + i)->id, 
               (ptr + i)->preco);
    }
    printf("------------------------------------------------------\n");
}

int main() {
    printf("=== ATIVIDADE 4 ===\n");
    
    // 1. Criar um array estático de 3 struct Produto e inicializá-los
    Produto estoque[3] = {
        {101, 150.00f},
        {102, 250.00f},
        {103, 350.00f}
    };
    int total_itens = 3;
    
    // Exibir o estoque inicial
    printf("Estoque inicial:\n");
    imprimir_produtos(estoque, total_itens);
    
    // Aplicar descontos no estoque
    printf("\nAplicando 10%% de desconto no produto de indice 1 (ID: %d)...\n", (estoque + 1)->id);
    aplicar_desconto(estoque + 1, 10.0f); // Passagem usando aritmética de ponteiro (estoque + 1)
    
    printf("Aplicando 20%% de desconto no produto de indice 2 (ID: %d)...\n", (estoque + 2)->id);
    aplicar_desconto(estoque + 2, 20.0f); // Passagem usando aritmética de ponteiro (estoque + 2)
    
    // Exibir o estoque final para comprovar as atualizações
    printf("\nEstoque final apos descontos:\n");
    imprimir_produtos(estoque, total_itens);
    
    printf("===================\n");
    return 0;
}
