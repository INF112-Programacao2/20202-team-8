#ifndef BARDO_H
#define BARDO_H

#include <string>
#include "Personagem.h"

class Bardo : public Personagem {
public:
    Bardo(std::string nome);
    ~Bardo();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;

    // HABILIDADE ESPECIAL
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // BARDO_H
