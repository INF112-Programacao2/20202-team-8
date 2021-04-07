#ifndef MAGO_H
#define MAGO_H

#include "personagem.h"

class Mago : public Personagem {
public:
    Mago();
    ~Mago();
    void ataque1_mago();
    void ataque2_mago();
};

#endif // MAGO_H
