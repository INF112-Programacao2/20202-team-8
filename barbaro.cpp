#include <string>
#include "personagem.h"
#include "barbaro.h"

Barbaro::Barbaro(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base):
    Personagem(nome,forca_base,destreza_base,constituicao_base,inteligencia_base){
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
