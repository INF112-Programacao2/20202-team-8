#include <string>
#include "personagem.h"
#include "arqueiro.h"

Arqueiro::Arqueiro(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base):
    Personagem(nome,forca_base,destreza_base,constituicao_base,inteligencia_base){
    _ataque_base += 7.0;
    _defesa_base += 5.0;
    _vida_base += 20.0;
    _mana_base += 8.0;
    _dano_magico_base += 3.0;
    _velocidade_base += 8.0;
    _ataque_batalha += 7.0;
    _defesa_batalha += 5.0;
    _vida_batalha += 20.0;
    _mana_batalha += 8.0;
    _dano_magico_batalha += 3.0;
    _velocidade_batalha += 8.0;
}

Arqueiro::~Arqueiro(){}

int Arqueiro::atacar(){
    return 0;
}

int Arqueiro::defender(){
    return 0;
}
