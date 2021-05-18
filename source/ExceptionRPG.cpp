#include <iostream>
#include "../include/ExceptionRPG.h"
using namespace std;

// ESREVE O ERRO PARA LETRAS
const void ExcecaoRPG::letra() const noexcept {
    cout << "Voce nao sinalizou nenhuma classe, por favor digite novamente" << endl;
}

// ESCREVE O ERRO PARA NUMEROS INVALIDOS
const void ExcecaoRPG::valor_personagem() const noexcept {
    cout << "Voce nao sinalizou nenhuma classe, por favor digite o numero novamente em um intervalo de 1 a 8" << endl;
}

// ESCREVE O ERRO PARA A QUANTIDADE DE NUMEROS
const void ExcecaoRPG::atributo_numero() const noexcept {
    cout << "Voce nao sinalizou nenhum atributo, por favor digite o numero novamente em um intervalo de 1 a 4" << endl;
}

// ESCREVE O ERRO PARA O VALOR DOS NUMEROS
const void ExcecaoRPG::atributo_texto() const noexcept {
    cout << "Voce nao sinalizou nenhum atributo, por favor digite novamente" << endl;
}

// ESCREVE O ERRO PARA TEXTO
const void ExcecaoRPG::acao_letra() const noexcept {
    cout << "Nao aceitamos letras, apenas numeros no intervalo de 1 a 4" << endl;
}

// ESCREVE O ERRO PARA NUMEROS INVALIDOS
const void ExcecaoRPG::acao_numero() const noexcept {
    cout << "Aceitamos apenas numeros no intervalo de 1 a 4" << endl;
}
