"1)Inverter String
Escreva uma função recursiva que receba uma string e retorne a string invertida.
Exemplo: inverter("recursao") → "oasrucer"."

#include <stdio.h>
#include <string.h>

// Função recursiva para inverter a string
void inverteString(char str[], int inicio, int fim) {
    char temp;

    // Condição de parada da recursão
    if (inicio >= fim) {
        return;
    }

    // Troca os caracteres de início e fim
    temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;

    // Chamada recursiva para a próxima dupla de caracteres
    inverteString(str, inicio + 1, fim - 1);
}
int main() {
    char str[] = "recursao";

    printf("String original: %s\n", str);

    // Chamada da função
    inverteString(str, 0, strlen(str) - 1);

    printf("String invertida: %s\n", str);

    return 0;
}