/* Calculadora em C
   Integrantes do grupo:
    1240108158 - Ryan Figueredo
    1240108101 - Lucas Antunes
    1240108383 - Thiago Gomes
    1240108540 - Vinicius Arruda
*/

#include <stdio.h>
#include <math.h>

void menu() {
    printf("\nCalculadora - Selecione a operacao:\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Potencia (x^y)\n");
    printf("6. Raiz Quadrada\n");
    printf("7. Sair\n");
}

int main() {
    int opcao;
    double num1, num2, resultado;
    do {
        menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 2:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 3:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 4:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) {
                    printf("Erro: Divisao por zero nao permitida.\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;
            case 5:
                printf("Digite a base e o expoente: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = pow(num1, num2);
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 6:
                printf("Digite um numero: ");
                scanf("%lf", &num1);
                if (num1 < 0) {
                    printf("Erro: Raiz quadrada de numero negativo nao permitida.\n");
                } else {
                    resultado = sqrt(num1);
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;
            case 7:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 7);

    return 0;
}
