#ifndef EQUIPE_H
#define EQUIPE_H

#include "personagem.h"
#include "arqueiro.h"
#include "barbaro.h"
#include "bardo.h"
#include "guerreiro.h"
#include "ladino.h"
#include "mago.h"
#include "paladino.h"
#include "sacerdote.h"

#include <string>
#include <vector>

class Equipe {
public:
    std::vector<Personagem*> _equipe;
    Equipe(unsigned int personagem_1, std::string nome_personagem1, long double forca_base_personagem1, long double destreza_base_personagem1, long double constituicao_base_personagem1,
           long double inteligencia_base_personagem1, unsigned int personagem_2, std::string nome_personagem2, long double forca_base_personagem2, long double destreza_base_personagem2,
           long double constituicao_base_personagem2, long double inteligencia_base_personagem2, unsigned int personagem_3, std::string nome_personagem3, long double forca_base_personagem3,
           long double destreza_base_personagem3, long double constituicao_base_personagem3, long double inteligencia_base_personagem3, unsigned int personagem_4, std::string nome_personagem4,
           long double forca_base_personagem4, long double destreza_base_personagem4, long double constituicao_base_personagem4, long double inteligencia_base_personagem4);
    ~Equipe();
};

#endif // EQUIPE_H
