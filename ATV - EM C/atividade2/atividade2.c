#include <stdio.h>

// Função que recebe como parâmetros:
// - Um ponteiro para o preço de um produto (float*)
// - Um valor percentual de desconto (float)
// A função não retorna nada (void), mas altera o valor original diretamente na memória.
void aplicar_desconto(float *ptr_preco, float desconto_percentual) {
    if (ptr_preco != NULL) {
        // Calcula e aplica o desconto diretamente na região de memória apontada
        *ptr_preco = *ptr_preco * (1.0f - (desconto_percentual / 100.0f));
    }
}

int main() {
    // Declarar e inicializar a variável de preço
    float preco = 100.0f;
    
    printf("=== ATIVIDADE 2 ===\n");
    printf("Preco original antes do desconto: %.2f\n", preco);
    
    // Definir o percentual de desconto
    float desconto = 15.0f; // 15% de desconto
    
    // Chamar a função aplicar_desconto passando o endereço da variável 'preco' (passagem por referência)
    aplicar_desconto(&preco, desconto);
    
    // Comprovar que a variável original foi modificada na memória
    printf("Preco apos desconto de %.1f%%: %.2f\n", desconto, preco);
    printf("===================\n");
    
    return 0;
}
