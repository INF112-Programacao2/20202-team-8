#include "../../include/inimigo/Troll.h"
#include "../../include/inimigo/Inimigo.h"

// CONSTRUTOR
Troll::Troll(int nivel):
    Inimigo(nivel){
    // NOME
    _nome = "Troll";

    // INICIANDO STATS
    _ataque=13.0+_nivel;
    _defesa=8.0+_nivel;
    _vida=30.0+(2.0*_nivel);
    _mana=5.0+(2.0*_nivel);
    _dano_magico=2.0+_nivel;
    _acerto=4.0+(_nivel/2.0);
    _velocidade=8.0+_nivel;
}

// DESTRUTOR
Troll::~Troll(){}
