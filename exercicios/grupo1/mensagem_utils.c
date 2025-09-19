#include <stdio.h>
#include "mensagem_utils.h"

void criarCabecalhoMensagem(char *mensagem){
    criarLinhaCabecalho();
    printf("%s", mensagem);
    criarLinhaCabecalho();
}

void criarLinhaCabecalho(){
    printf("==================================\n");
}

void limparTela(){
    printf("\e[1;1H\e[2J");
}