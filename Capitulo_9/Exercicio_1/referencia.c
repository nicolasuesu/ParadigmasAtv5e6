#include <stdio.h>

void dobrar_ref(int *x) {   // recebe endereço
    *x = (*x) * 2;
}

int main() {
    int n = 10;
    dobrar_ref(&n);
    printf("Por referencia: n = %d\n", n); // agora 20
    return 0;
}
