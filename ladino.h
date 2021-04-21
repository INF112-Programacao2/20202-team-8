#ifndef LADINO_H
#define LADINO_H

#include "personagem.h"

class Ladino : public Personagem {
public:
    Ladino();
    ~Ladino();
    void ataque_basico() override;
};

#endif // LADINO_H
