#ifndef BARDO_H
#define BARDO_H

#include "personagem.h"

class Bardo : public Personagem {
public:
    Bardo();
    ~Bardo();
    void ataque_basico() override;
};

#endif // BARDO_H
