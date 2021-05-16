#ifndef BARBARO_H
#define BARBARO_H

#include <string>
#include "Personagem.h"

class Barbaro : public Personagem {
public:
    Barbaro(std::string nome);
    ~Barbaro();

    // ATAQUE E DEFESA
    virtual int atacar() override;
    virtual int defender() override;

    // HABILIDADE ESPECIAL
    virtual double ataque_1() override;
    virtual double ataque_2() override;
};

#endif // BARBARO_H
