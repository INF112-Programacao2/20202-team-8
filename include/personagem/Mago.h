#ifndef MAGO_H
#define MAGO_H

#include <string>
#include "Personagem.h"

class Mago : public Personagem {
public:
    Mago(std::string nome);
    ~Mago();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;

    // HABILIDADE ESPECIAL
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // MAGO_H
