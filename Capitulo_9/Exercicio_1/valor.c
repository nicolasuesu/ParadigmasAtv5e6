#include <stdio.h>

void dobrar_valor(int x) {  // recebe cópia
    x = x * 2;
}

int main() {
    int n = 10;
    dobrar_valor(n);
    printf("Por valor: n = %d\n", n); // continua 10
    return 0;
}
