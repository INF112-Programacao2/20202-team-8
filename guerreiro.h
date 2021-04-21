#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "personagem.h"

class Guerreiro : public Personagem {
public:
    Guerreiro();
    ~Guerreiro();
    void ataque_basico() override;
};

#endif // GUERREIRO_H
