#include <string>
#include "personagem.h"
#include "paladino.h"

Paladino::Paladino(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base):
    Personagem(nome,forca_base,destreza_base,constituicao_base,inteligencia_base){
    _ataque_base += 8.0;
    _defesa_base += 9.0;
    _vida_base += 30.0;
    _mana_base += 7.0;
    _dano_magico_base += 4.0;
    _velocidade_base += 5.0;
    _ataque_batalha += 8.0;
    _defesa_batalha += 9.0;
    _vida_batalha += 30.0;
    _mana_batalha += 7.0;
    _dano_magico_batalha += 4.0;
    _velocidade_batalha += 5.0;
}

Paladino::~Paladino(){}

int Paladino::atacar(){
    return 0;
}

int Paladino::defender(){
    return 0;
}
