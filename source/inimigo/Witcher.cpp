#include "../../include/inimigo/Witcher.h"
#include "../../include/inimigo/Inimigo.h"

// CONSTRUTOR
Witcher::Witcher(int nivel):
    Inimigo(nivel){
    // NOME
    _nome = "Witcher";

    //INICIANDO STATS
    _ataque=2.0+_nivel;
    _defesa=2.0+_nivel;
    _vida=15.0+(2.0*_nivel);
    _mana=15.0+(2.0*_nivel);
    _dano_magico=9.0+_nivel;
    _acerto=0.0+(_nivel/2.0);
    _velocidade=12.0+_nivel;
}

// DESTRUTOR
Witcher::~Witcher(){}
