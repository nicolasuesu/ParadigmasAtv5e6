#include <stdio.h>

void contador() {
    int a = 0;        // automática (stack)
    static int b = 0; // estática (duração total do programa)

    a++;
    b++;

    printf("a (automática) = %d, b (estática) = %d\n", a, b);
}

int main() {
    contador(); // a = 1, b = 1
    contador(); // a = 1, b = 2
    contador(); // a = 1, b = 3
    return 0;
}
