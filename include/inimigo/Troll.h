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

    //COMANDOS PARA HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
    virtual double ataque_3() override;
};

#endif // TROLL_H
