#ifndef LADINO_H
#define LADINO_H

#include "personagem.h"

class Ladino : public Personagem {
public:
    Ladino();
    ~Ladino();
    void ataque1_ladino();
    void ataque2_ladino();
};

#endif // LADINO_H
