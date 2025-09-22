#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
};

int main() {
    int notas[5] = {10, 8, 9, 7, 8}; // array homogêneo
    for (int i = 0; i < 5; i++) {
        printf("%d ", notas[i]);
    }

    struct Livro livro1;
    strcpy(livro1.titulo, "Conceitos de Linguagens de Programação");
    strcpy(livro1.autor, "Robert W. Sebesta");
    livro1.anoPublicacao = 2018;

    printf("\nTítulo do livro: %s\n", livro1.titulo);
    return 0;
}
