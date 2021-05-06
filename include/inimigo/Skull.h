#ifndef SKULL_H
#define SKULL_H

#include "Inimigo.h"

class Skull : public Inimigo {
public:
    Skull(int nivel);
    ~Skull();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // SKULL_H