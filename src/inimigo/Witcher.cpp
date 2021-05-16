#include "../../include/inimigo/Witcher.h"
#include "../../include/inimigo/Inimigo.h"

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
    return (_defesa * 4);
}

double Witcher::ataque_1(){
    if(_Transformada == false)
        return (_ataque * 1.5);
    else
        return (_ataque * 1.8);
}

double Witcher::ataque_2(){
    if(_Transformada == false)
        return (_ataque * 2.5);
    else
    {
        //Cura 15% do dano
        return (_ataque *2.5);
    }
}

double Witcher::ataque_3(){
    if(_Transformada == false)
    {
        //Aumenta ataque de todos aliados
        set_ataque (_nivel + _ataque);
        return 0;
    }
    else
    {
        //Cura vida
        set_ataque(_ataque * 1.2);
        set_defesa(_defesa * 1.2);
        set_velocidade(_velocidade * 1.2);
        return 0;
    }
}

double Witcher::ataque_4(){
    if(_Transformada == false)
    {
        _Transformada = true;
        return 0;
    }
    else
    {
        //Diminui spd do alvo
        return (_ataque * 1.6);
    }

}
