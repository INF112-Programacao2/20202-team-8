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

    //COMANDOS PARA HABILIDADES ESPECIAIS
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // SKULL_H
