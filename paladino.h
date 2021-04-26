#ifndef PALADINO_H
#define PALADINO_H

#include <string>
#include "personagem.h"

class Paladino : public Personagem {
public:
    Paladino(std::string nome, long double forca, long double destreza, long double constituicao, long double inteligencia);
    ~Paladino();

    // ATACAR
    virtual int atacar() override;
    // DEFENDER
    virtual int defender() override;
};

#endif // PALADINO_H
