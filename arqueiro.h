#ifndef ARQUEIRO_H
#define ARQUEIRO_H

#include "personagem.h"

class Arqueiro : public Personagem {
public:
    Arqueiro();
    ~Arqueiro();
    void ataque1_arqueiro();
    void ataque2_arqueiro();
};

#endif // ARQUEIRO_H
