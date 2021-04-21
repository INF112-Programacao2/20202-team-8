#ifndef ARQUEIRO_H
#define ARQUEIRO_H

#include "personagem.h"

class Arqueiro : public Personagem {
public:
    Arqueiro();
    ~Arqueiro();
    void ataque_basico() override;
};

#endif // ARQUEIRO_H
