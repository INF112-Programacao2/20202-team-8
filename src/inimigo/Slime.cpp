#include "../../include/inimigo/Slime.h"
#include "../../include/inimigo/Inimigo.h"

Slime::Slime(int nivel):
    Inimigo(nivel){
    
    _nome = "Slime";

    //INICIANDO STATS 
    _ataque = 5.0 + _nivel;
    _defesa = 5.0 + _nivel;
    _vida = 15.0 + (2*_nivel);
    _mana = 0.0 + (2*_nivel);
    _dano_magico = 0.0 + _nivel;
    _acerto = 2.0 + (_nivel/2);
    _velocidade = 5.0 + _nivel;
}

Slime::~Slime(){}

int Slime::atacar(){
    return _ataque;
}

int Slime::defender(){
    return (_defesa * 4);
}

double Slime::ataque_1(){
//diminui velocidade do alvo
    return (_ataque * 1,5);
}
