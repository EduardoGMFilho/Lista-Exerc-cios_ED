"2)Máximo em Lista
Crie uma função recursiva que receba uma lista de números e retorne o maior elemento.
Exemplo: maximo([3, 7, 2, 9, 1]) → 9."

#include <stdio.h>

// Função recursiva para encontrar o maior elemento em um array
int maximo(int arr[], int tamanho) {
    // Condição de parada (caso base): se o tamanho for 1
    if (tamanho == 1) {
        return arr[0];
    }

    // Passo recursivo
    // Chama a função para encontrar o maior no resto do array (do início até o penúltimo elemento)
    int max_do_resto = maximo(arr, tamanho - 1);

    // Compara o último elemento do array com o maior do resto
    if (arr[tamanho - 1] > max_do_resto) {
        return arr[tamanho - 1];
    } else {
        return max_do_resto;
    }
}

int main() {
    int numeros[] = {3, 7, 2, 9, 1};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Array: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Chama a função recursiva para encontrar o maior elemento
    int maior_numero = maximo(numeros, tamanho);

    printf("O maior elemento e: %d\n", maior_numero);

    return 0;
}
