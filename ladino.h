#ifndef LADINO_H
#define LADINO_H

#include <string>
#include "personagem.h"

class Ladino : public Personagem {
public:
    Ladino(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia);
    ~Ladino();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // LADINO_H
