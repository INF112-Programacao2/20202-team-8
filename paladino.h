#ifndef PALADINO_H
#define PALADINO_H

#include <string>
#include "personagem.h"

class Paladino : public Personagem {
public:
    Paladino(std::string nome, long double forca_base, long double destreza_base, long double constituicao_base, long double inteligencia_base);
    ~Paladino();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // PALADINO_H
