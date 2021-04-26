#include <string>
#include "personagem.h"
#include "barbaro.h"

Barbaro::Barbaro(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia):
    Personagem(nome,forca,destreza,constituicao,inteligencia){
    _ataque_base += 12.0;
    _defesa_base += 7.0;
    _vida_base += 36.0;
    _velocidade_base += 4.0;
    _ataque_batalha += 12.0;
    _defesa_batalha += 7.0;
    _vida_batalha += 36.0;
    _velocidade_batalha += 4.0;
}

Barbaro::~Barbaro(){}

int Barbaro::atacar(){
    return 0;
}

int Barbaro::defender(){
    return 0;
}
