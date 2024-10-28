#include <stdio.h>
#include <stdlib.h>

    // Valores iniciais da sequ�ncia de Fibonacci
int is_fibonacci(int num) {
    int a = 0, b = 1, temp;

    // Verifica se o n�mero informado � 0 ou 1. ir� retornar 1 se o n�mero pertence � sequ�ncia
    if (num == 0 || num == 1) {
        return 1;
    }

    // Gera a sequ�ncia at� que o pr�ximo valor ultrapasse o n�mero informado e // Retorna 1 se o n�mero pertence � sequ�ncia
    while (b <= num) {
        if (b == num) {
            return 1;
        }
        temp = b;   // Guarda o valor de 'b' antes de fazer a atualiza��o para o novo numero
        b = a + b;  // Pr�ximo n�mero na sequ�ncia
        a = temp;   // Atualiza 'a' para o valor anterior de 'b'
    }

    return 0; // Retorna 0 se o n�mero n�o pertence � sequ�ncia
}

int main() {
    int numero;

    printf("Informe um n�mero para verificar se pertence � sequ�ncia de Fibonacci: ");
    scanf("%d", &numero);

    if (is_fibonacci(numero)) {
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci.\n", numero);
    } else {
        printf("O n�mero %d n�o pertence � sequ�ncia de Fibonacci.\n", numero);
    }

    return 0;
}
