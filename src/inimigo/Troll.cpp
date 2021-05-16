#include "../../include/inimigo/Troll.h"
#include "../../include/inimigo/Inimigo.h"

Troll::Troll(int nivel):
    Inimigo(nivel){
    
    _nome = "Troll";

    //INICIANDO STATS 
    _ataque = 13.0 + _nivel;
    _defesa = 8.0 + _nivel;
    _vida = 30.0 + (2*_nivel);
    _mana = 5.0 + (2*_nivel);
    _dano_magico = 2.0 + _nivel;
    _acerto = 4.0 + (_nivel/2);
    _velocidade = 8.0 + _nivel;
}

Troll::~Troll(){}

int Troll::atacar(){
    return _ataque;
}

int Troll::defender(){
    return (_defesa * 4);
}

double Troll::ataque_1(){
    set_ataque(_nivel + _ataque);
    return (_ataque * 1.5);
}

double Troll::ataque_2(){
    //Reduz defesa
    //Reduz spd
    return (_ataque * 0.8);
}

double Troll::ataque_3(){
    //Aumenta def de todos aliados
    set_defesa(_nivel + _defesa);
    return 0;
}
