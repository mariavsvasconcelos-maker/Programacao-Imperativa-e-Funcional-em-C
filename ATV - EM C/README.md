# Atividades de Ponteiros em Linguagem C

Este repositório contém as resoluções de atividades práticas focadas em **Ponteiros, Passagem por Referência, Structs e Aritmética de Ponteiros** na linguagem C.

---

## Estrutura do Projeto

*   **[atividade1.c](file:///c:/Users/vasconcelos/Downloads/ATV%20-%20EM%20C/atividade1/atividade1.c)**: Fundamentos de ponteiros e alteração direta na memória.
*   **[atividade2.c](file:///c:/Users/vasconcelos/Downloads/ATV%20-%20EM%20C/atividade2/atividade2.c)**: Passagem de ponteiros como parâmetros de função (referência).
*   **[atividade3.c](file:///c:/Users/vasconcelos/Downloads/ATV%20-%20EM%20C/atividade3/atividade3.c)**: Uso de ponteiros para estruturas (`struct`) utilizando o operador seta (`->`).
*   **[atividade4.c](file:///c:/Users/vasconcelos/Downloads/ATV%20-%20EM%20C/atividade4/atividade4.c)**: Aritmética de ponteiros para iterar sobre um vetor de structs.

---

## Detalhes das Atividades

### Atividade 1: Fundamentos de Ponteiros e Modificação Direta
*   **Enunciado:** Crie um programa que declare uma variável do tipo `float` representando o preço de um produto e a inicialize com um valor (ex: 100.0). Em seguida, declare um ponteiro para `float` e aponte-o para o endereço dessa variável. Através exclusivamente do ponteiro, aplique um aumento de 10% no preço. Por fim, imprima o valor original da variável para comprovar que ele foi alterado.

### Atividade 2: Passagem por Referência
*   **Enunciado:** Evolua o código anterior removendo a alteração direta na `main`. Crie uma função chamada `aplicar_desconto` que não retorne nada (`void`), mas que receba como parâmetros: um ponteiro para o preço de um produto e um valor percentual de desconto (`float`). A função deve alterar o valor original na memória. Chame essa função na `main` passando o endereço da sua variável de preço.

### Atividade 3: Ponteiros para Structs
*   **Enunciado:** Transforme o conceito abstrato de produto em uma struct chamada `Produto`, contendo um `id` (inteiro) e um `preco` (float). Atualize a função `aplicar_desconto` para que agora ela receba um ponteiro para a struct `Produto` e o percentual de desconto. Utilize o operador seta (`->`) para acessar e modificar o campo preço dentro da função.

### Atividade 4: Aritmética de Ponteiros em Arrays 
*   **Enunciado:** Expanda o programa para gerenciar um pequeno estoque. Na `main`, crie um array estático de 3 struct `Produto` e inicialize-os com dados de sua escolha. Crie uma função chamada `imprimir_produtos` que receba um ponteiro para `Produto` e a quantidade de itens. **Obrigatório:** Dentro da função, percorra o vetor e imprima os dados utilizando *aritmética de ponteiros* (ex: `(ptr + i)->preco`), sem utilizar a sintaxe tradicional de índices de colchetes (`ptr[i]`).

---

## Como Compilar e Executar no Terminal


### Atividade 1
```bash
gcc atividade1/atividade1.c -o atividade1/atividade1.exe
.\atividade1\atividade1.exe
```

### Atividade 2
```bash
gcc atividade2/atividade2.c -o atividade2/atividade2.exe
.\atividade2\atividade2.exe
```

### Atividade 3
```bash
gcc atividade3/atividade3.c -o atividade3/atividade3.exe
.\atividade3\atividade3.exe
```

### Atividade 4
```bash
gcc atividade4/atividade4.c -o atividade4/atividade4.exe
.\atividade4\atividade4.exe
```
