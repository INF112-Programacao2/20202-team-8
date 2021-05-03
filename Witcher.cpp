#include "Witcher.h"
#include "Inimigo.h"

Witcher::Witcher(int nivel):
    Inimigo(nivel){
    
    _nome = "Witcher";

    //INICIANDO STATS 
    _ataque = 2.0 + _nivel;
    _defesa = 2.0 + _nivel;
    _vida = 15.0 + (2*_nivel);
    _mana = 15.0 + (2*_nivel);
    _dano_magico = 9.0 + _nivel;
    _acerto = 0.0 + (_nivel/2);
    _velocidade = 12.0 + _nivel;
}

Witcher::~Witcher(){}

int Witcher::atacar(){
    return _ataque;
}

int Witcher::defender(){
    return _defesa;
}