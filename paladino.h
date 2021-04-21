#ifndef PALADINO_H
#define PALADINO_H

#include "personagem.h"

class Paladino : public Personagem {
public:
    Paladino();
    ~Paladino();
    void ataque_basico() override;
};

#endif // PALADINO_H
