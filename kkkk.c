#include <stdio.h>
#include<stdlib.h>
#include <string.h>

// Definição da struct Contato
struct Contato {
    char nome[50];
    char telefone[20];
    char email[50];
};

// Função para buscar o número de telefone de um contato
char* buscarTelefone(struct Contato contatos[], int numContatos, const char* nome) {
    for (int i = 0; i < numContatos; i++) {
        if (strcmp(contatos[i].nome, nome) == 0) {
            return contatos[i].telefone;
        }
    }
    return NULL;
}

int main() {
    struct Contato contatos[3];

    // Solicita que o usuário cadastre 3 contatos
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do contato %d: ", i+1);
        scanf("%s", contatos[i].nome);

        printf("Digite o número de telefone do contato %d: ", i+1);
        scanf("%s", contatos[i].telefone);

        printf("Digite o e-mail do contato %d: ", i+1);
        scanf("%s", contatos[i].email);
    }

    // Solicita o nome do contato para buscar o número de telefone
    char nome[50];
    printf("Digite o nome do contato que deseja buscar: ");
    scanf("%s", nome);

    // Chama a função buscarTelefone para obter o número de telefone
    char* telefone = buscarTelefone(contatos, 3, nome);

    // Exibe o número de telefone encontrado ou uma mensagem de erro
    if (telefone != NULL) {
        printf("O número de telefone do contato %s é %s\n", nome, telefone);
    } else {
        printf("Contato não encontrado!\n");
    }

    return 0;
}