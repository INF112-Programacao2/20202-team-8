#include "ladino.h"

Ladino::Ladino(){
    Personagem();
    _forca_base = 2.0;
    _constituicao_base = 4.0;
    _inteligencia_base = 5.0;
    _velocidade_base = 3.0;
    _destreza_base = 6.0;
    _forca_batalha = _forca_base;
    _constituicao_batalha = _constituicao_base;
    _inteligencia_batalha = _inteligencia_base;
    _velocidade_batalha = _velocidade_base;
    _destreza_batalha = _destreza_base;
}

Ladino::~Ladino(){}

void Ladino::ataque1_ladino(){}

void Ladino::ataque2_ladino(){}
