"3) Soma de Lista Recursiva
Escreva uma função recursiva que calcule a soma dos elementos de uma lista.
Exemplo: soma([1, 2, 3, 4]) → 10."


#include <stdio.h>

// Função recursiva para calcular a soma dos elementos de um array
int soma(int arr[], int tamanho) {
    // Condição de parada (caso base): se o tamanho for 0, a soma é 0.
    if (tamanho == 0) {
        return 0;
    }

    // Passo recursivo: soma o último elemento com a soma do restante do array
    return arr[tamanho - 1] + soma(arr, tamanho - 1);
}

int main() {
    int numeros[] = {1, 2, 3, 4};
    // Calcula o tamanho do array
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Array: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Chama a função recursiva e armazena o resultado
    int resultado = soma(numeros, tamanho);

    printf("A soma dos elementos e: %d\n", resultado);

    return 0;
}