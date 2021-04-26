#include <string>
#include "personagem.h"
#include "sacerdote.h"

Sacerdote::Sacerdote(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base):
    Personagem(nome,forca_base,destreza_base,constituicao_base,inteligencia_base){
    _ataque_base += 3.0;
    _defesa_base += 4.0;
    _vida_base += 24.0;
    _mana_base += 10.0;
    _dano_magico_base += 5.0;
    _velocidade_base += 2.0;
    _ataque_batalha += 3.0;
    _defesa_batalha += 4.0;
    _vida_batalha += 24.0;
    _mana_batalha += 10.0;
    _dano_magico_batalha += 5.0;
    _velocidade_batalha += 2.0;
}

Sacerdote::~Sacerdote(){}

int Sacerdote::atacar(){
    return 0;
}

int Sacerdote::defender(){
    return 0;
}
