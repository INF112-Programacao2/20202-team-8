#ifndef SACERDOTE_H
#define SACERDOTE_H

#include <string>
#include "Personagem.h"

class Sacerdote : public Personagem {
public:
    Sacerdote(std::string nome);
    ~Sacerdote();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;

    // HABILIDADE ESPECIAL
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // SACERDOTE_H
