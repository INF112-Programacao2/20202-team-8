#ifndef BARDO_H
#define BARDO_H

#include "personagem.h"

class Bardo : public Personagem {
public:
    Bardo();
    ~Bardo();
    void ataque1_bardo();
    void ataque2_bardo();
};

#endif // BARDO_H
