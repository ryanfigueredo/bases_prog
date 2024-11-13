/* Verificação de Número Primo em C
Integrantes do grupo:
    1240108158 - Ryan Figueredo
    1240108101 - Lucas Antunes
    1240108383 - Thiago Gomes
    1240108540 - Vinicius Arruda
*/

#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero < 2) return false;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return false;
    }
    return true;
}

int main() {
    int numero, contador = 0, proximoNumero;

    // Solicita ao usuário um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é primo e informa o resultado
    if (ehPrimo(numero)) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    // Encontra e exibe os 3 menores números primos maiores que o número fornecido
    printf("Os 3 menores numeros primos maiores que %d sao: ", numero);
    proximoNumero = numero + 1;
    while (contador < 3) {
        if (ehPrimo(proximoNumero)) {
            printf("%d ", proximoNumero);
            contador++;
        }
        proximoNumero++;
    }
    printf("\n");

    return 0;
}
