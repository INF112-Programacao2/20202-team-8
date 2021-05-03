#ifndef SLIME_H
#define SLIME_H

#include "Inimigo.h"

class Slime : public Inimigo {
public:
    Slime(int nivel);
    ~Slime();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // SLIME_H