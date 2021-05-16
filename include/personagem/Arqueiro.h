#ifndef ARQUEIRO_H
#define ARQUEIRO_H

#include <string>
#include "Personagem.h"

class Arqueiro : public Personagem {
public:
    Arqueiro(std::string nome);
    ~Arqueiro();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;

    // HABILIDADE ESPECIAL
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // ARQUEIRO_H
