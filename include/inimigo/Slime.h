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

    //COMANDOS PARA HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
};

#endif // SLIME_H
