#ifndef LADINO_H
#define LADINO_H

#include <string>
#include "personagem.h"

class Ladino : public Personagem {
public:
    Ladino(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base);
    ~Ladino();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // LADINO_H
