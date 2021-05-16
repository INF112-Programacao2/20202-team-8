#include "../../include/inimigo/Skull.h"
#include "../../include/inimigo/Inimigo.h"

Skull::Skull(int nivel):
    Inimigo(nivel){
    
    _nome = "Skull";

    //INICIANDO STATS 
    _ataque = 8.0 + _nivel;
    _defesa = 5.0 + _nivel;
    _vida = 22.0 + (2*_nivel);
    _mana = 0.0 + (2*_nivel);
    _dano_magico = 0.0 + _nivel;
    _acerto = 3.0 + (_nivel/2);
    _velocidade = 4.0 + _nivel;
}

Skull::~Skull(){}

int Skull::atacar(){
    return _ataque;
}

int Skull::defender(){
    return (_defesa * 4);
}

double Skull::ataque_1(){
    return (_ataque * 1.8);
};

double Skull::ataque_2(){
    //Redução de defesa
    return (_ataque * 1.3);
}
