#include <string>
#include "personagem.h"

// CONSTRUTOR
Personagem::Personagem(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base):
    _nome(nome), _forca_base(forca_base), _destreza_base(destreza_base), _constituicao_base(constituicao_base), _inteligencia_base(inteligencia_base),
    _forca_batalha(forca_base), _destreza_batalha(destreza_base), _constituicao_batalha(constituicao_base), _inteligencia_batalha(inteligencia_base),
    _ataque_base(0.0 + forca_base), _defesa_base(0.0), _vida_base(0.0 + constituicao_base), _mana_base(0.0 + inteligencia_base),
    _dano_magico_base(0.0 + inteligencia_base), _acerto_base(0.0 + destreza_base), _velocidade_base(0.0 + destreza_base),
    _ataque_batalha(0.0 + forca_base), _defesa_batalha(0.0), _vida_batalha(0.0 + constituicao_base), _mana_batalha(0.0 + inteligencia_base),
    _dano_magico_batalha(0.0 + inteligencia_base), _acerto_batalha(0.0 + destreza_base), _velocidade_batalha(0.0 + destreza_base) {}

// DESTRUTOR
Personagem::~Personagem(){}

// GET/SET NOME
std::string& Personagem::nome(){
    return _nome;
}

// GET/SET NIVEL
unsigned long long int& Personagem::nivel(){
    return _nivel;
}

// GET/SET MODIFICADORES (BASE)
long double& Personagem::forca_base(){
    return _forca_base;
}

long double& Personagem::destreza_base(){
    return _destreza_base;
}

long double& Personagem::constituicao_base(){
    return _constituicao_base;
}

long double& Personagem::inteligencia_base(){
    return _inteligencia_base;
}

// GET/SET MODIFICADORES (BATALHA)
long double& Personagem::forca_batalha(){
    return _forca_batalha;
}

long double& Personagem::destreza_batalha(){
    return _destreza_batalha;
}

long double& Personagem::constituicao_batalha(){
    return _constituicao_batalha;
}

long double& Personagem::inteligencia_batalha(){
    return _inteligencia_batalha;
}

// GET/SET STATS (BASE)
long double& Personagem::ataque_base(){
    return _ataque_base;
}

long double& Personagem::defesa_base(){
    return _defesa_base;
}

long double& Personagem::vida_base(){
    return _vida_base;
}

long double& Personagem::mana_base(){
    return _mana_base;
}

long double& Personagem::dano_magico_base(){
    return _dano_magico_base;
}

long double& Personagem::acerto_base(){
    return _acerto_base;
}

long double& Personagem::velocidade_base(){
    return _velocidade_base;
}

// GET/SET STATS (BATALHA)
long double& Personagem::ataque_batalha(){
    return _ataque_batalha;
}

long double& Personagem::defesa_batalha(){
    return _defesa_batalha;
}

long double& Personagem::vida_batalha(){
    return _vida_batalha;
}

long double& Personagem::mana_batalha(){
    return _mana_batalha;
}

long double& Personagem::dano_magico_batalha(){
    return _dano_magico_batalha;
}

long double& Personagem::acerto_batalha(){
    return _acerto_batalha;
}

long double& Personagem::velocidade_batalha(){
    return _velocidade_batalha;
}

void Personagem::level_up(long double forca_extra, long double destreza_extra, long double constituicao_extra, long double inteligencia_extra){
    _nivel++;

    _forca_base += forca_extra;
    _destreza_base += destreza_extra;
    _constituicao_base += constituicao_extra;
    _inteligencia_base += inteligencia_extra;

    _forca_batalha = _forca_base;
    _destreza_batalha = _destreza_base;
    _constituicao_batalha = _constituicao_base;
    _inteligencia_batalha = _inteligencia_base;

    _ataque_base += forca_extra;
    _vida_base += constituicao_extra;
    _mana_base += inteligencia_extra;
    _dano_magico_base += inteligencia_extra;
    _acerto_base += destreza_extra;
    _velocidade_base += destreza_extra;

    _ataque_batalha = _ataque_base;
    _vida_batalha = _vida_base;
    _mana_batalha = _mana_base;
    _dano_magico_batalha = _dano_magico_base;
    _acerto_batalha = _acerto_base;
    _velocidade_batalha = _velocidade_base;
}

int Personagem::atacar(){
    return 0;
}

int Personagem::defender(){
    return 0;
}
