#ifndef PALADINO_H
#define PALADINO_H

#include <string>
#include "Personagem.h"

class Paladino : public Personagem {
public:
    Paladino(std::string nome);
    ~Paladino();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;

    // HABILIDADE ESPECIAL
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // PALADINO_H
