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

#include <vector>

class Equipe {
public:
    std::vector<Personagem*> _equipe;
    Equipe(unsigned int personagem_1, unsigned int personagem_2,unsigned int personagem_3, unsigned int personagem_4);
    ~Equipe();
};

#endif // EQUIPE_H
