#include "sacerdote.h"

Sacerdote::Sacerdote(){
    Personagem();
    _forca_base = 2.0;
    _constituicao_base = 3.0;
    _inteligencia_base = 4.0;
    _velocidade_base = 5.0;
    _destreza_base = 6.0;
    _forca_batalha = _forca_base;
    _constituicao_batalha = _constituicao_base;
    _inteligencia_batalha = _inteligencia_base;
    _velocidade_batalha = _velocidade_base;
    _destreza_batalha = _destreza_base;
}

Sacerdote::~Sacerdote(){}

void Sacerdote::ataque1_sacerdote(){}

void Sacerdote::ataque2_sacerdote(){}
