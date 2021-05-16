#include <string>
#include "../../include/personagem/Personagem.h"
#include "../../include/personagem/Mago.h"

Mago::Mago(std::string nome):
    Personagem(nome){
            
    //CLASSE
    _classe="Mago";

    //INICIANDO STATS BASE
    _ataque_base=3.0;
    _defesa_base=2.0;
    _vida_base=18.0;
    _mana_base=12.0;
    _dano_magico_base=10.0;
    _acerto_base=0.0;
    _velocidade_base=3.0;
    
    //INICIANDO STATS MODIFICADOS
    _ataque = _ataque_base + _forca;
    _defesa = _defesa_base;
    _vida = _vida_base + _constituicao;
    _mana = _mana_base + (2*_inteligencia);
    _dano_magico = _dano_magico_base + _inteligencia;
    _acerto = _acerto_base + _destreza;
    _velocidade = _velocidade_base + _destreza;

    //INICIANDO STATS BATALHA
    _ataque_batalha = _ataque;
    _defesa_batalha = _defesa;
    _vida_batalha = _vida;
    _mana_batalha = _mana;
    _dano_magico_batalha = _dano_magico;
    _acerto_batalha = _acerto;
    _velocidade_batalha = _velocidade;
}

Mago::~Mago(){}

int Mago::atacar(){
    return _ataque_batalha;
}

int Mago::defender(){
    return (_defesa_batalha * 4);
}

double Mago::ataque_1(){
    set_mana_batalha(_mana_batalha - 2.5);
    //Reduz vel de todos inimigos
    return (_dano_magico_batalha * 1.3);
}

double Mago::ataque_2(){
    set_mana_batalha(_mana_batalha - 2);
    return (_dano_magico_batalha * 2);
}
