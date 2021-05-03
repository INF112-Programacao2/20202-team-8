#ifndef TROLL_H
#define TROLL_H

#include "Inimigo.h"

class Troll : public Inimigo {
public:
    Troll(int nivel);
    ~Troll();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // TROLL_H