#include <string>
#include "../../include/personagem/Personagem.h"
#include "../../include/personagem/Barbaro.h"

// CONSTRUTOR
Barbaro::Barbaro(std::string nome):
    Personagem(nome){
    // CLASSE
    _classe="Barbaro";

    // INICIANDO STATS BASE
    _ataque_base=12.0;
    _defesa_base=7.0;
    _vida_base=36.0;
    _mana_base=4.0;
    _dano_magico_base=0.0;
    _acerto_base=0.0;
    _velocidade_base=4.0;

    // INICIANDO STATS MODIFICADOS
    _ataque=_ataque_base;
    _defesa=_defesa_base;
    _vida=_vida_base;
    _mana=_mana_base;
    _dano_magico=_dano_magico_base;
    _acerto=_acerto_base;
    _velocidade=_velocidade_base;

    // INICIANDO STATS BATALHA
    _ataque_batalha=_ataque;
    _defesa_batalha=_defesa;
    _vida_batalha=_vida;
    _mana_batalha=_mana;
    _dano_magico_batalha=_dano_magico;
    _acerto_batalha=_acerto;
    _velocidade_batalha=_velocidade;
}

// DESTRUTOR
Barbaro::~Barbaro(){}

// HABILIDADES ESPECIAIS
double Barbaro::ataque_1(){
    set_ataque_batalha(_ataque_batalha*1.1);
    set_mana_batalha(_mana_batalha-2.0);
    return this->_ataque_batalha*1.5;
}

double Barbaro::ataque_2(){
    set_mana_batalha(_mana_batalha-4.0);
    return this->_ataque_batalha*3.0;
}
