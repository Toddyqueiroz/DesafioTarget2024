#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    // Entrada da string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Percorre a string e conta as ocorrências de 'a' ou 'A'
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    // Verifica se a letra 'a' foi encontrada e exibe o resultado
    if (count > 0) {
        printf("A letra 'a' foi encontrada %d vez(es) na string.\n", count);
    } else {
        printf("A letra 'a' nao foi encontrada na string.\n");
    }

    return 0;
}
