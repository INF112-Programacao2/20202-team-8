#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "personagem.h"

class Guerreiro : public Personagem {
public:
    Guerreiro();
    ~Guerreiro();
    void ataque1_guerreiro();
    void ataque2_guerreiro();
};

#endif // GUERREIRO_H
