#include <stdio.h>
#include <stdlib.h>

    // Valores iniciais da sequência de Fibonacci
int is_fibonacci(int num) {
    int a = 0, b = 1, temp;

    // Verifica se o número informado é 0 ou 1. irá retornar 1 se o número pertence à sequência
    if (num == 0 || num == 1) {
        return 1;
    }

    // Gera a sequência até que o próximo valor ultrapasse o número informado e // Retorna 1 se o número pertence à sequência
    while (b <= num) {
        if (b == num) {
            return 1;
        }
        temp = b;   // Guarda o valor de 'b' antes de fazer a atualização para o novo numero
        b = a + b;  // Próximo número na sequência
        a = temp;   // Atualiza 'a' para o valor anterior de 'b'
    }

    return 0; // Retorna 0 se o número não pertence à sequência
}

int main() {
    int numero;

    printf("Informe um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &numero);

    if (is_fibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
