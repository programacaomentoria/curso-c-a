#include <stdio.h>
#include <string.h>
#include <time.h>

void criarCabecalhoMensagem(char *mensagem);
void criarLinhaCabecalho();
void limparTela();

int main() {
    char nomeCompleto[255] = "", dataNascimento[20] = "", 
         cidadePaisOrigem[255] = "", enderecoCompleto[255] = "",
         paisResidencia[255] = "", dataCadastro[20] = "",
         escolaridade[255] = "";
    
    limparTela();
    
    criarCabecalhoMensagem("Cadastro de Clientes\n\0");
    printf("Nome Completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

    printf("Data de Nascimento: ");
    fgets(dataNascimento, sizeof(dataNascimento), stdin);

    printf("Cidade/País de Origem (Nascimento): ");
    fgets(cidadePaisOrigem, sizeof(cidadePaisOrigem), stdin);

    printf("Endereço Completo: ");
    fgets(enderecoCompleto, sizeof(enderecoCompleto), stdin);

    printf("País residência: ");
    fgets(paisResidencia, sizeof(paisResidencia), stdin);

    printf("Escolaridade (Ensino Básico/ Ensino Fundamental/ Ensino Superior): ");
    fgets(escolaridade, sizeof(escolaridade), stdin);

    time_t rawtime = time(NULL);
    struct tm *tInfo = localtime(&rawtime);

    snprintf(dataCadastro, sizeof(dataCadastro), "%02d/%02d/%d", tInfo->tm_mday, (tInfo->tm_mon + 1), (tInfo->tm_year + 1900));

    printf("\n");
    criarCabecalhoMensagem("Dados do cliente cadastrado\n\0");
    printf("Nome Completo: %s", nomeCompleto);
    printf("Data de Nascimento: %s", dataNascimento);
    printf("Cidade/País de Origem: %s", cidadePaisOrigem);
    printf("Endereço Completo: %s", enderecoCompleto);
    printf("País de Residência: %s", paisResidencia);
    printf("Escolaridade: %s", escolaridade);
    printf("Data de Cadastro: %s\n", dataCadastro);

}

void criarCabecalhoMensagem(char *mensagem){
    criarLinhaCabecalho();

    // imprimindo caractere por caractere
    // while(*mensagem != '\0'){
    //     printf("%c", *mensagem++);
    // }
    printf("%s", mensagem);

    criarLinhaCabecalho();
}

void criarLinhaCabecalho(){
    printf("==================================\n");
}

void limparTela(){
    printf("\e[1;1H\e[2J");
}