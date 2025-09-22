#include <stdio.h>

int quadrado(int n) { return n * n; }
long long fatorial(int n) {
    long long r = 1;
    for (int i = 2; i <= n; i++) r *= i;
    return r;
}

int main() {
    int opcao, n;
    do {
        printf("1) Quadrado\n2) Fatorial\n3) Sair\nOpcao: ");
        if (scanf("%d", &opcao) != 1) return 0;
        switch (opcao) {
            case 1:
                printf("Digite n: "); scanf("%d", &n);
                printf("Quadrado = %d\n", quadrado(n));
                break;
            case 2:
                printf("Digite n: "); scanf("%d", &n);
                printf("Fatorial = %lld\n", fatorial(n));
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 3);
    return 0;
}
