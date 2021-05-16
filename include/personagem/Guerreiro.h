#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <string>
#include "Personagem.h"

class Guerreiro : public Personagem {
public:
    Guerreiro(std::string nome);
    ~Guerreiro();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;

    // HABILIDADE ESPECIAL
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // GUERREIRO_H
