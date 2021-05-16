#include <string>
#include "../../include/personagem/Personagem.h"
#include "../../include/personagem/Ladino.h"

Ladino::Ladino(std::string nome, int forca, int destreza, int constituicao, int inteligencia):
    Personagem(nome,forca,destreza,constituicao,inteligencia){
            
    //INICIANDO STATS BASE
    _ataque_base=6.0;
    _defesa_base=5.0;
    _vida_base=24.0;
    _mana_base=8.0;
    _dano_magico_base=3.0;
    _acerto_base=0.0;
    _velocidade_base=6.0;
    
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

Ladino::~Ladino(){}

int Ladino::atacar(){
    return _ataque_batalha;
}

int Ladino::defender(){
    return _defesa_batalha;
}