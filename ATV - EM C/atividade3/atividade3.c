#include <stdio.h>

// 1. Transformar o conceito abstrato de produto em uma struct chamada Produto
typedef struct {
    int id;
    float preco;
} Produto;

// 2. Atualizar a função aplicar_desconto para receber um ponteiro para a struct Produto
// e o percentual de desconto. Utilizar o operador seta (->) para acessar e modificar o campo preco.
void aplicar_desconto(Produto *ptr_prod, float desconto_percentual) {
    if (ptr_prod != NULL) {
        // O operador seta (->) é usado para acessar membros de uma struct por meio de seu ponteiro.
        // ptr_prod->preco é equivalente a (*ptr_prod).preco
        ptr_prod->preco = ptr_prod->preco * (1.0f - (desconto_percentual / 100.0f));
    }
}

int main() {
    // Declarar e inicializar uma struct Produto
    Produto prod;
    prod.id = 101;
    prod.preco = 100.0f;
    
    printf("=== ATIVIDADE 3 ===\n");
    printf("Produto ID: %d | Preco original: %.2f\n", prod.id, prod.preco);
    
    // Chamar a função aplicar_desconto passando o endereço da struct Produto
    float desconto = 20.0f; // 20% de desconto
    aplicar_desconto(&prod, desconto);
    
    // Imprimir os dados do produto para comprovar a alteração do preço
    printf("Produto ID: %d | Preco apos desconto de %.1f%%: %.2f\n", prod.id, desconto, prod.preco);
    printf("===================\n");
    
    return 0;
}
