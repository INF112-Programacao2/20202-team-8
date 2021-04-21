#ifndef MAGO_H
#define MAGO_H

#include "personagem.h"

class Mago : public Personagem {
public:
    Mago();
    ~Mago();
    void ataque_basico() override;
};

#endif // MAGO_H
