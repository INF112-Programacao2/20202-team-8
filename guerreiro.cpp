#include <string>
#include "personagem.h"
#include "guerreiro.h"

Guerreiro::Guerreiro(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia):
    Personagem(nome,forca,destreza,constituicao,inteligencia){
    _ataque_base += 10.0;
    _defesa_base += 7.0;
    _vida_base += 30.0;
    _mana_base += 5.0;
    _dano_magico_base += 4.0;
    _velocidade_base += 5.0;
    _ataque_batalha += 10.0;
    _defesa_batalha += 7.0;
    _vida_batalha += 30.0;
    _mana_batalha += 5.0;
    _dano_magico_batalha += 4.0;
    _velocidade_batalha += 5.0;
}

Guerreiro::~Guerreiro(){}

int Guerreiro::atacar(){
    return 0;
}

int Guerreiro::defender(){
    return 0;
}
