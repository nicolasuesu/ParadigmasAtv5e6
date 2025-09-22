package Capitulo_5e6.Atividade_4;
import java.util.ArrayList;

class Livro {
    String titulo;
    String autor;
    int anoPublicacao;

    Livro(String titulo, String autor, int ano) {
        this.titulo = titulo;
        this.autor = autor;
        this.anoPublicacao = ano;
    }
}

public class Main {
    public static void main(String[] args) {
        ArrayList<Livro> livros = new ArrayList<>();
        livros.add(new Livro("Duna", "Frank Herbert", 1965));
        livros.add(new Livro("1984", "George Orwell", 1949));
        livros.add(new Livro("O Guia do Mochileiro das Galáxias", "Douglas Adams", 1979));

        System.out.println("Títulos dos livros:");
        for (Livro l : livros) {
            System.out.println(l.titulo);
        }
    }
}
