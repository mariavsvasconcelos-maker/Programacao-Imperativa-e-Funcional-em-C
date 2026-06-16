#include <stdio.h>

int main() {
    // 1. Declarar uma variável do tipo float representando o preço de um produto e inicializar com 100.0
    float preco = 100.0f;
    
    // 2. Declarar um ponteiro para float e apontá-lo para o endereço da variável
    float *ptr_preco = &preco;
    
    // Imprimir o preço antes do aumento para demonstração
    printf("=== ATIVIDADE 1 ===\n");
    printf("Preco original: %.2f\n", preco);
    printf("Endereco de memoria da variavel 'preco': %p\n", (void*)&preco);
    printf("Valor apontado por 'ptr_preco': %.2f\n\n", *ptr_preco);
    
    // 3. Através exclusivamente do ponteiro, aplicar um aumento de 10% no preço
    // O operador de desreferenciação '*' é usado para acessar/modificar o valor no endereço apontado
    *ptr_preco = (*ptr_preco) * 1.10f;
    
    // 4. Imprimir o valor original da variável para comprovar que ele foi alterado
    printf("Preco apos aumento de 10%% (comprovando alteracao): %.2f\n", preco);
    printf("Valor apontado por 'ptr_preco' apos o aumento: %.2f\n", *ptr_preco);
    printf("===================\n");
    
    return 0;
}
