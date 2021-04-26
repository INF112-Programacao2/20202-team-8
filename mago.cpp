#include <string>
#include "personagem.h"
#include "mago.h"

Mago::Mago(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia):
    Personagem(nome,forca,destreza,constituicao,inteligencia){
    _ataque_base += 3.0;
    _defesa_base += 2.0;
    _vida_base += 18.0;
    _mana_base += 12.0;
    _dano_magico_base += 10.0;
    _velocidade_base += 3.0;
    _ataque_batalha += 3.0;
    _defesa_batalha += 2.0;
    _vida_batalha += 18.0;
    _mana_batalha += 12.0;
    _dano_magico_batalha += 10.0;
    _velocidade_batalha += 3.0;
}

Mago::~Mago(){}

int Mago::atacar(){
    return 0;
}

int Mago::defender(){
    return 0;
}
