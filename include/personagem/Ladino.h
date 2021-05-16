#ifndef LADINO_H
#define LADINO_H

#include <string>
#include "Personagem.h"

class Ladino : public Personagem {
public:
    Ladino(std::string nome);
    ~Ladino();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;

    // HABILIDADE ESPECIAL
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // LADINO_H
