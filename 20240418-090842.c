#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Definição da struct Aluno
struct Aluno {
    char nome[50];
    char RA[8];
};

// Método para verificar se o RA pertence ao aluno
bool verificaRA(struct Aluno aluno, char *RA_digitado) {
    if (strcmp(aluno.RA, RA_digitado) == 0) {
        printf("Este RA pertence ao aluno.\n");
        return true;
    } else {
        printf("Este RA não pertence ao aluno.\n");
        return false;
    }
}

// Método para exibir informações do Aluno
void exibeInfo(struct Aluno aluno, char curso[50]) {
    printf("Nome: %s\n", aluno.nome);
    printf("RA: %s\n", aluno.RA);
    printf("Curso: %s\n", curso);
}

int main() {
    // Definindo os dados do Aluno
    struct Aluno aluno = {"Leonardo de Oliveira Munerato", "G7959A7"};

    // Variável para armazenar o RA digitado pelo usuário
    char RA_digitado[8];

    // Solicitando que o usuário digite o RA
    printf("Digite o RA do aluno: ");
    scanf("%s", RA_digitado);

    // Verificando o RA
    verificaRA(aluno, RA_digitado);

    // Exibindo informações do Aluno
    char curso[50] = "Análise e Desenvolvimento de Sistemas";
    exibeInfo(aluno, curso);

    return 0;
}