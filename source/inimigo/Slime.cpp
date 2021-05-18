#include "../../include/inimigo/Slime.h"
#include "../../include/inimigo/Inimigo.h"

// CONSTRUTOR
Slime::Slime(int nivel):
    Inimigo(nivel){
    // NOME
    _nome = "Slime";

    //INICIANDO STATS
    _ataque=5.0+_nivel;
    _defesa=5.0+_nivel;
    _vida=15.0+(2.0*_nivel);
    _mana=0.0+(2.0*_nivel);
    _dano_magico=0.0+_nivel;
    _acerto=2.0+(_nivel/2.0);
    _velocidade=5.0+_nivel;
}

// DESTRUTOR
Slime::~Slime(){}
