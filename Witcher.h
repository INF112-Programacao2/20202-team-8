#ifndef WITCHER_H
#define WITCHER_H

#include "Inimigo.h"

class Witcher : public Inimigo {
public:
    Witcher(int nivel);
    ~Witcher();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;
};

#endif // WITCHER_H